#!/usr/bin/env python3

import os
from subprocess import run
import struct
import argparse

def int32(x):
    return x & 0xFFFFFFFF


def rol(i, b):
    return int32((i << b) | (i >> (32 - b)))


def calculate_crcs(buffer: bytearray, seed=0xF8CA4DDC, start=0x1000, end=0x101000):
    t1 = t2 = t3 = t4 = t5 = t6 = seed

    for d, in struct.iter_unpack(">I", buffer[start:end]):
        r = rol(d, d & 0x1F)

        if int32(t6 + d) < t6:
            t4 = int32(t4 + 1)

        t3 ^= d
        t6 = int32(t6 + d)
        t2 ^= r if (t2 > d) else t6 ^ d
        t5 = int32(t5 + r)
        t1 = int32(t1 + (t5 ^ d))

    return (t6 ^ t4 ^ t3, t5 ^ t2 ^ t1)

def mio0_comp_bytes(decomp_bytes, mio0):
    #possibly replace with a python implementation later
    decomp_path = os.path.dirname(mio0) + 'TempComp.bin.mio0'
    comp_path = os.path.dirname(mio0) + 'TempComp.bin'

    with open(decomp_path, 'wb') as decomp_file:
        decomp_file.write(decomp_bytes)
    
    run([mio0, '-c', decomp_path, comp_path])

    with open(comp_path, 'rb') as comp_file:
        comp_bytes = comp_file.read()
    
    run(['rm', decomp_path, comp_path])

    return comp_bytes

def mio0_dec_bytes(comp_bytes, mio0):
    #possibly replace with a python implementation later
    decomp_path = os.path.dirname(mio0) + 'TempComp.bin.mio0'
    comp_path = os.path.dirname(mio0) + 'TempComp.bin'

    with open(comp_path, 'wb') as comp_file:
        comp_file.write(comp_bytes)
    
    run([mio0, '-d', comp_path, decomp_path])

    with open(decomp_path, 'rb') as decomp_file:
        decomp_bytes = decomp_file.read()
    
    run(['rm', decomp_path, comp_path])

    return decomp_bytes

def compress(baserom, comprom, mio0, extract_dest=None):
    decomp_inds = [0, 1, 2, 3, 4, 5, 15, 16, 21, 22, 23, 24, 48]

    # comp_const = 0xFFFEFFFFFE1E7FC0

    with open(comprom, 'w+b') as compfile, open(baserom, 'rb') as basefile:
        file_count = 0
        p_file_begin = 0

        while True:
            file_entry = 0xDE480 + 0x10 * file_count
            basefile.seek(file_entry + 4)

            v_file_begin = int.from_bytes(basefile.read(4),'big')
            v_file_end = int.from_bytes(basefile.read(4),'big')

            v_file_size = v_file_end - v_file_begin

            if(v_file_begin == 0 and v_file_end == 0):
                break

            basefile.seek(v_file_begin)
            compfile.truncate(p_file_begin)

            file_bytes = basefile.read(v_file_size)

            if (file_count in decomp_inds) or (file_count <= 5):
            # if (1 << file_count) & comp_flags:
                p_file_size = v_file_size
                dec_msg = 'uncompressed'
                comp_flag = 0
            else:
                file_bytes = mio0_comp_bytes(file_bytes, mio0)
                dec_msg = 'compressed'
                extra_bytes = len(file_bytes) % 0x10
                
                if extra_bytes != 0:
                    file_bytes += bytes(0x10 - extra_bytes)
                
                p_file_size = len(file_bytes)
                comp_flag = 1
            
            compfile.seek(0, 2)

            print("File " + str(file_count) + ": Writing " + format(p_file_size, 'X') + " bytes at " + format(compfile.tell(),'X'))
            

            compfile.write(file_bytes)

            p_file_end = p_file_begin + p_file_size

            compfile.seek(file_entry + 4)
            compfile.write(p_file_begin.to_bytes(4,'big'))
            compfile.write(p_file_end.to_bytes(4,'big'))
            compfile.write(int.to_bytes(comp_flag, 4, 'big'))

            p_file_begin = p_file_end

            file_count += 1

        compfile.seek(0, 2)

        extra_space = 0xC00000 - compfile.tell()
        if extra_space > 0:
            compfile.write(b'\xFF' * extra_space)


        compfile.seek(0)
        crc1, crc2 = calculate_crcs(compfile.read())
    
        compfile.seek(0x10)
        compfile.write(crc1.to_bytes( 4, 'big'))
        compfile.write(crc2.to_bytes( 4, 'big'))
    
    return

def decompress(baserom, decomprom, mio0, extract_dest=None):
    with open(decomprom, 'w+b') as decompfile, open(baserom, 'rb') as baserom:
        file_count = 0

        while True:
            file_entry = 0xDE480 + 0x10 * file_count
            baserom.seek(file_entry)

            v_file_begin = int.from_bytes(baserom.read(4),'big')
            p_file_begin = int.from_bytes(baserom.read(4),'big')
            p_file_end = int.from_bytes(baserom.read(4),'big')
            comp_flag = int.from_bytes(baserom.read(4),'big')

            p_file_size = p_file_end - p_file_begin
            
            print(v_file_begin, p_file_begin, p_file_end, comp_flag)

            if(v_file_begin == 0 and p_file_end == 0):
                break

            decompfile.truncate(v_file_begin)

            baserom.seek(p_file_begin)

            file_bytes = baserom.read(p_file_size)

            if comp_flag == 0:
                v_file_size = p_file_size
                dec_msg = 'uncompressed'
            elif comp_flag == 1:
                file_bytes = mio0_dec_bytes(file_bytes, mio0)
                dec_msg = 'compressed'
                v_file_size = len(file_bytes)
            else:
                print('You dun goofed')
                exit
            
            decompfile.seek(0, 2)

            decompfile.write(file_bytes)

            v_file_end = v_file_begin + v_file_size

            if extract_dest is not None:
                if not os.path.exists(extract_dest):
                    os.mkdir(extract_dest)

                file_name = format(v_file_begin, 'X') + '.bin'

                with open(extract_dest + os.sep + file_name, 'wb') as extract_file:
                    extract_file.write(file_bytes)

            decompfile.seek(file_entry + 4)
            decompfile.write(v_file_begin.to_bytes(4,'big'))
            decompfile.write(v_file_end.to_bytes(4,'big'))
            decompfile.write(bytes(4))

            file_count += 1

        decompfile.seek(0)
        crc1, crc2 = calculate_crcs(decompfile.read())
    
        decompfile.seek(0x10)
        decompfile.write(crc1.to_bytes(4, 'big'))
        decompfile.write(crc2.to_bytes(4, 'big'))
    
    return

parser = argparse.ArgumentParser(description='Compress or decompress a Star Fox 64 ROM')
parser.add_argument('inROM', help="ROM file to compress or decompress")
parser.add_argument('outROM', help="output file for processed ROM.")
parser.add_argument('-e', metavar='extract',dest='extract',help='directory for extracted decompressed files. Use with -d')
parser.add_argument('-c', action='store_true',help='compress provided ROM')
parser.add_argument('-d', action='store_true',help='decompress provided ROM')
parser.add_argument('-m', metavar='mio0',dest='mio0',help='Path to mio0 tool if not in same directory')
# parser.add_argument('-v', action='store_true',help='show what changes are made')

if __name__ == '__main__':
    args = parser.parse_args()

    if not args.mio0:
        mio0 = os.path.dirname(__file__) + os.sep + 'mio0'
    else:
        mio0 = args.mio0

    if args.c:
        compress(args.inROM, args.outROM, mio0)
    elif args.d or args.extract:
        decompress(args.inROM, args.outROM, mio0, args.extract)
    else:
        print("Something went wrong.")


