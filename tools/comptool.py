#!/usr/bin/env python3

import os
from subprocess import run
import struct
import argparse
import sys

file_table_dict = {0xDE480:"US1.1", 0xD9A90:"US1.0"}

file_names = [
    "makerom", "main", "dma_table", "audio_seq", "audio_bank", "audio_table", "ast_common", "ast_bg_space", "ast_bg_planet",
    "ast_arwing", "ast_landmaster", "ast_blue_marine", "ast_versus", "ast_enmy_planet", "ast_enmy_space", "ast_great_fox",
    "ast_star_wolf", "ast_allies", "ast_corneria", "ast_meteo", "ast_titania", "ast_7_ti_2", "ast_8_ti", "ast_9_ti", "ast_A_ti",
    "ast_7_ti_1", "ast_sector_x", "ast_sector_z", "ast_aquas", "ast_area_6", "ast_venom_1", "ast_venom_2", "ast_ve1_boss",
    "ast_bolse", "ast_fortuna", "ast_sector_y", "ast_solar", "ast_zoness", "ast_katina", "ast_macbeth", "ast_warp_zone",
    "ast_title", "ast_map", "ast_option", "ast_vs_menu", "ast_font", "ast_font_3d", "ast_andross", "ast_logo", "ast_ending",
    "ast_ending_award_front", "ast_ending_award_back", "ast_reward", "ast_training", "ast_radio", "ovl_i1", "ovl_i2",
    "ovl_i3", "ovl_i4", "ovl_i5", "ovl_i6", "ovl_menu", "ovl_ending", "ovl_unused"
    ]

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

def fix_crc(rom):
    with open(rom, 'r+b') as romfile:
        crc1, crc2 = calculate_crcs(romfile.read())
    
        romfile.seek(0x10)
        romfile.write(crc1.to_bytes( 4, 'big'))
        romfile.write(crc2.to_bytes( 4, 'big'))
    return


def mio0_comp_bytes(decomp_bytes, mio0):
    #possibly replace with a python implementation later
    decomp_path = os.path.dirname(mio0) + '/TempComp.bin.mio0'
    comp_path = os.path.dirname(mio0) + '/TempComp.bin'

    with open(decomp_path, 'wb') as decomp_file:
        decomp_file.write(decomp_bytes)
    
    run([mio0, '-c', decomp_path, comp_path])

    with open(comp_path, 'rb') as comp_file:
        comp_bytes = comp_file.read()
    
    run(['rm', decomp_path, comp_path])

    return comp_bytes

def mio0_dec_bytes(comp_bytes, mio0):
    #possibly replace with a python implementation later
    decomp_path = os.path.dirname(mio0) + '/TempComp.bin.mio0'
    comp_path = os.path.dirname(mio0) + '/TempComp.bin'

    with open(comp_path, 'wb') as comp_file:
        comp_file.write(comp_bytes)
    
    run([mio0, '-d', comp_path, decomp_path])

    with open(decomp_path, 'rb') as decomp_file:
        decomp_bytes = decomp_file.read()
    
    run(['rm', decomp_path, comp_path])

    return decomp_bytes

def find_file_table(ROM):
    with open(ROM, 'rb') as ROMfile:
        
        ROMfile.seek(0,0)
        
        main_area = ROMfile.read(0x100000)
        
        file_table_start = main_area.find(b'\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x10\x50\x00\x00\x00\x00')

        # print(file_table_start)

    return file_table_start

def compress(baserom, comprom, mio0, extract_dest=None):
    decomp_inds = [0, 1, 2, 3, 4, 5, 15, 16, 21, 22, 23, 24, 48]
    file_table = find_file_table(baserom)
    
    # comp_const = 0xFFFEFFFFFE1E7FC0

    with open(comprom, 'w+b') as compfile, open(baserom, 'rb') as basefile:
        file_count = 0
        p_file_begin = 0
        

        while True:
            file_entry = file_table + 0x10 * file_count
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

            # print("File " + str(file_count) + ": Writing " + format(p_file_size, 'X') + " bytes at " + format(compfile.tell(),'X'))
            
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

def decompress(baserom, decomprom, mio0, extract_dest=None, print_inds=False):
    file_table = find_file_table(baserom)
    
    if file_table_dict.get(file_table) == "US1.0":
        ext = "rev0.z64"
    elif file_table_dict.get(file_table) == "US1.1":
        ext = "z64"
    else:
        ext = ('%X' % file_table) + ".z64"
    
    print("File table found at 0x%X" % file_table)
    print("Detected ROM version is " + file_table_dict.get(file_table, "Unknown"))
        
    outrom = decomprom.replace("z64", ext)
    
    with open(outrom, 'w+b') as decompfile, open(baserom, 'rb') as basefile:
        file_count = 0
        decomp_inds = []
        
        while True:
            file_entry = file_table + 0x10 * file_count
            basefile.seek(file_entry)

            v_file_begin = int.from_bytes(basefile.read(4),'big')
            p_file_begin = int.from_bytes(basefile.read(4),'big')
            p_file_end = int.from_bytes(basefile.read(4),'big')
            comp_flag = int.from_bytes(basefile.read(4),'big')

            p_file_size = p_file_end - p_file_begin
            
            #print(v_file_begin, p_file_begin, p_file_end, comp_flag)

            if(v_file_begin == 0 and p_file_end == 0):
                break

            decompfile.truncate(v_file_begin)

            basefile.seek(p_file_begin)

            file_bytes = basefile.read(p_file_size)

            if comp_flag == 0:
                v_file_size = p_file_size
                decomp_inds += [file_count]
                dec_msg = 'uncompressed'
            elif comp_flag == 1:
                file_bytes = mio0_dec_bytes(file_bytes, mio0)
                dec_msg = 'compressed'
                v_file_size = len(file_bytes)
            else:
                print('Invalid compression flag. Invalid ROM? Make sure ROM version is US v1.1 (REV A)')
                sys.exit(2)
            
            decompfile.seek(0, 2)

            decompfile.write(file_bytes)

            v_file_end = v_file_begin + v_file_size

            if extract_dest is not None:
                if not os.path.exists(extract_dest):
                    os.mkdir(extract_dest)

                file_name = file_names[file_count] + '.bin'

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
        print("Decompressed %d files." % file_count)
        if(print_inds) :
            print("These file numbers were not compressed:")
            print(decomp_inds)
        
    return

parser = argparse.ArgumentParser(description='Compress or decompress a Star Fox 64 ROM')
parser.add_argument('inROM', help="ROM file to compress or decompress")
parser.add_argument('outROM', help="output file for processed ROM.")
parser.add_argument('-e', metavar='extract',dest='extract',help='directory for extracted decompressed files. Use with -d')
parser.add_argument('-c', action='store_true',help='compress provided ROM')
parser.add_argument('-d', action='store_true',help='decompress provided ROM')
parser.add_argument('-m', metavar='mio0',dest='mio0',help='Path to mio0 tool if not in same directory')
parser.add_argument('-r', action="store_true",help='Fix crc without compressing or decompressing')
parser.add_argument('-i', action='store_true',help='Print indices of uncompressed files during decompression.')
# parser.add_argument('-v', action='store_true',help='show what changes are made')

if __name__ == '__main__':
    args = parser.parse_args()

    if not args.mio0:
        mio0 = os.path.dirname(__file__) + os.sep + 'mio0'
    else:
        mio0 = args.mio0

    if args.r:
        fix_crc(args.inROM)
    elif args.c:
        compress(args.inROM, args.outROM, mio0)
    elif args.d or args.extract:
        decompress(args.inROM, args.outROM, mio0, args.extract, args.i)
    else:
        print("Something went wrong.")


