#!/usr/bin/env python3

import os
import re
import struct
import math
from collections import Counter
import argparse

def removepower(f, n):
    if(n <= 1):
        return f
    t = f
    while t % n == 0:
        t /= n
    return t

def rationalcheck(f, dmax, tol=23):
    for den in range(1, dmax+1):
        num = f * den
        if round(num,0) > 0:
            error = abs(math.log(num/round(num,0)))
        else:
            error = 1
        if(error == 0 or -math.log2(error) > tol): #and (den % 10 == 0 or den % 0x10 == 0)):
            if(removepower(den, 10) < 20 or removepower(den, 16) < 20):
                print(f, int(round(num,0)), den, hex(den), math.floor(-math.log2(error)) if error != 0 else 0)
                break
    return 0

def findallfloats(path, odd=True, off=True):
    numfilesodd = 0
    numfilesoff = 0
    for subdir, dirs, files in os.walk(path):
        for filename in files:
            filepath = subdir + os.sep + filename
            if(filename.endswith('.c')): # and 'data' not in filename):
                numodd, allodd, numoff, alloff = findoddfloats(filepath)
                if(odd and numodd > 0):
                    print(filepath,'has', ('an ' if numodd == 1 else '') + 'odd float' + ('' if numodd == 1 else 's') + ':')
                    # print(set(allodd))
                    # breakpoint()
                    [rationalcheck(float(x.strip('f')), 1000) for x in set(allodd)]
                    numfilesodd += 1
                if(off and numoff > 0):
                    print(filepath,'has', ('an ' if numoff == 1 else '') + 'off float' + ('' if numoff == 1 else 's') + ':')
                    print(set(alloff))
                    [rationalcheck(float(x[0].strip('f')), 1000, 22) for x in set(alloff)]
                    numfilesoff += 1
    return numfilesodd, numfilesoff

def roundallfloats(path):
    for subdir, dirs, files in os.walk(path):
        for filename in files:
            filepath = subdir + os.sep + filename
            if filename.endswith('.c'):
                numodd, numob1 = roundfloats(filepath)
                if(numodd > 0):
                    print(filepath,'has', ('a ' if numodd == 1 else '') + 'fixable float' + ('' if numodd == 1 else 's'))
                    # print(allodd)
                if(numob1 > 0):
                    print(filepath,'has', ('a ' if numob1 == 1 else '') + 'off-by-1 float' + ('' if numob1 == 1 else 's'))
    return 0

def roundfloats(src):
    floatmatch = re.compile('[0-9][0-9]*\.[0-9][0-9]*f')
    numfix = 0
    numob1 = 0
    with open(src,'r',encoding='utf-8',newline='\n') as srcfile:
        srcdata = srcfile.readlines()
    for i, line in enumerate(srcdata):
        floats = floatmatch.findall(line)
        fixline = line
        for f in floats:
            fn = float(f.strip('f'))
            rfn, ob1 = roundfloat(fn)
            rf = str(rfn) + 'f'
            if(fn != rfn):
                numfix += 1
                if('data' not in src):
                    print(src, 'line', i, ':', f, 'to', rf)
                fixline = fixline.replace(f, rf)
            # if(ob1):
                # numob1 += 1
                # print(src, 'line', i, ':', f, 'off-by-1')

        srcdata[i] = fixline
    if(numfix > 0):
        with open(src, 'w', encoding='utf-8',newline='\n') as outfile:
            outfile.writelines(srcdata)

    return numfix, numob1


def findoddfloats(src):
    floatmatch = re.compile('[0-9]*\.[0-9]*f')
    numodd = 0
    numoff = 0
    allodd = []
    alloff = []
    with open(src,'r',encoding='utf-8') as srcfile:
        for i, line in enumerate(srcfile):
            floats = floatmatch.findall(line)
            print("all")
            print(floats)
            oddfloats = [x for x in floats if (isoddfloat(x) and offby(x) >= 10)]
            print("odd")
            print(oddfloats)
            offfloats = [(x, offby(x)) for x in floats if (isoddfloat(x) and offby(x) < 10)]
            print("offfloats")
            print(offfloats)
            numodd += len(oddfloats)
            numoff += len(offfloats)
            alloff += offfloats
            allodd += oddfloats
    return numodd, allodd, numoff, alloff

def isoddfloat(floatstr):
    return len(floatstr.strip('f').replace('.','').strip('0')) >= 7

def offby(floatstr):
    val = float(floatstr.strip('f'))
    fbytes = struct.pack(">f", val)
    i = -math.floor(math.log10(val))
    offvals = []
    while(struct.pack(">f",round(val,i)) != fbytes):
        fi = struct.unpack(">i",fbytes)[0]
        rfi = struct.unpack(">i",struct.pack(">f",round(val,i-1)))[0]

        offvals += [abs(fi - rfi)]

        i += 1

    if(offvals[-1] <= 2 and offvals[-2] <= 2):
        return offvals[-1]

    counter = Counter(offvals)

    if(not counter.values()):
        return 1000000

    if(max(counter.values()) >= 3):
        mode = min([item for item, count in counter.items() if count == max(counter.values())])
        return mode
    else:
        return 1000000

def roundfloat(val):
    fbytes = struct.pack(">f", val)
    i = 0
    offby1 = False
    while(struct.pack(">f",round(val,i)) != fbytes):
        fi = struct.unpack(">i",fbytes)[0]
        rfi = struct.unpack(">i",struct.pack(">f",round(val,i)))[0]
        if(fi - rfi == 1 or fi - rfi == -1):
            offby1 = True
        i += 1
    return round(val, i), offby1

parser = argparse.ArgumentParser(description='Analyze floats in a project\'s source')
parser.add_argument('src', help="source file or directory to analyze")
parser.add_argument('-r', action='store_true',help='round all floats to minimum precision')
parser.add_argument('-d', action="store_true",help='Apply to a directory')
# parser.add_argument('-v', action='store_true',help='show what changes are made')

if __name__ == '__main__':
    args = parser.parse_args()

    if(args.r):
        if(args.d):
            roundallfloats(args.src)
        else:
            roundfloats(args.src)
    if(args.d):
        findallfloats(args.src)
    else:
        findoddfloats(args.src)