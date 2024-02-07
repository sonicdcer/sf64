import argparse
import struct

def ReadAllLines(fileName):
    lineList = list()
    with open(fileName) as f:
        lineList = f.readlines()

    return lineList

def parse_num(value, output):
    num = value[1]
    if value[0] == 'word':
        if output == 'float':
            return f'{struct.unpack(">f", bytes.fromhex(num[2:]))[0]}f' if num[0:2] == '0x' else f'{float(num)}f'
        elif output == 'int':
            return struct.unpack('>i', bytes.fromhex(num[2:]))[0] if num[0:2] == '0x' else int(num)
    elif value[0] == 'float':
        if output == 'float':
            return f'{value[1]}.0f'
        elif output == 'int':
            return value[1]
    elif value[0] == 'short':
        if output == 'float':
            return f'{float(struct.unpack(">h", bytes.fromhex(num[2:]))[0])}f'
        elif output == 'int':
            return f'{int(struct.unpack(">h", bytes.fromhex(num[2:]))[0])}'
    elif value[0] == 'byte':
        if output == 'float':
            return f'{float(struct.unpack(">b", bytes.fromhex(num[2:]))[0])}f'
        elif output == 'int':
            return f'{int(struct.unpack(">b", bytes.fromhex(num[2:]))[0])}'
    else:
        print(f'Unknown type: {value[0]}')

def parse_f32(lines, symbol):
    is_array = len(lines) > 1
    if is_array:
        print(f'f32 {symbol}[] = {{')
        for idx, l in enumerate(lines):
            num = parse_num(l, 'float')
            print(f'    {num}{"," if idx % 3 != 2 else "," }')
        print('};')
    else:
        print(f'f32 {symbol} = {parse_num(lines[0], "float")};')

def parse_vec3f(lines, symbol):
    is_array = len(lines) > 1
    if is_array:
        print(f'Vec3f {symbol}[] = {{')
        for idx, l in enumerate(lines):
            num = parse_num(l, 'float')
            if idx % 3 == 0:
                print('    {', end='')
            print(f' {num}{"," if idx % 3 != 2 else " "}', end='')
            if idx % 3 == 2:
                print('},')
        print('};')
    else:
        print(f'Vec3f {symbol} = {{ {parse_num(lines[0], "float")}, {parse_num(lines[1], "float")}, {parse_num(lines[2], "float")} }};')

def parse_vec3s(lines, symbol):
    is_array = len(lines) > 1
    if is_array:
        print(f'Ve3s {symbol}[] = {{')
        for idx, l in enumerate(lines):
            num = parse_num(l, 'int')
            if idx % 3 == 0:
                print('    {', end='')
            print(f' {num}{"," if idx % 3 != 2 else " "}', end='')
            if idx % 3 == 2:
                print('},')
        print('};')
    else:
        print(f'Vec3s {symbol} = {{ {parse_num(lines[0], "int")}, {parse_num(lines[1], "int")}, {parse_num(lines[2], "int")} }};')

def parse_s32(lines, symbol):
    is_array = len(lines) > 1
    if is_array:
        print(f's32 {symbol}[] = {{')
        for idx, l in enumerate(lines):
            num = parse_num(l, 'int')
            print(f'    {num}{"," if idx % 3 != 2 else "," }')
        print('};')
    else:
        print(f's32 {symbol} = {parse_num(lines[0], "int")};')

def parse_s16(lines, symbol):
    is_array = len(lines) > 1
    if is_array:
        print(f's16 {symbol}[] = {{')
        for idx, l in enumerate(lines):
            num = parse_num(l, 'int')
            print(f'    {num}{"," if idx % 3 != 2 else "," }')
        print('};')
    else:
        print(f's16 {symbol} = {parse_num(lines[0], "int")};')

def parse_u8(lines, symbol):
    is_array = len(lines) > 1
    if is_array:
        print(f'u8 {symbol}[] = {{')
        for idx, l in enumerate(lines):
            num = parse_num(l, 'int')
            print(f'    {num}{"," if idx % 3 != 2 else "," }')
        print('};')
    else:
        print(f'u8 {symbol} = {parse_num(lines[0], "int")};')

def parse_single(args):
    lines = ReadAllLines(args.file)

    if args.format == 'f32':
        parse_f32(lines, args.symbol)
    elif args.format == 'vec3f':
        parse_vec3f(lines, args.symbol)
    elif args.format == 's32':
        parse_s32(lines, args.symbol)
    elif args.format == 's16':
        parse_s16(lines, args.symbol)
    elif args.format == 'u8':
        parse_u8(lines, args.symbol)
    elif args.format == 'vec3s':
        parse_vec3s(lines, args.symbol)
    else:
        print(f'Unknown format: {args.format}')

def parse_data(args):

    if not args.externs:
        print('Missing externs file --externs')
        return

    lines = ReadAllLines(args.file)
    data = []
    symbols = {}
    current = None

    for line in ReadAllLines(args.externs):
        if(line.strip() == ''):
            continue

        type = line.strip().split(' ')[1]
        symbol = line.strip().split(' ')[2].split('[')[0].removesuffix(';')
        if type == 'f32':
            symbols[symbol] = parse_f32
        elif type == 'Vec3f':
            symbols[symbol] = parse_vec3f
        elif type == 's32':
            symbols[symbol] = parse_s32
        elif type == 'u8':
            symbols[symbol] = parse_u8
        elif type == 's16':
            symbols[symbol] = parse_s16
        elif type == 'Vec3s':
            symbols[symbol] = parse_vec3s

    for idx, l in enumerate(lines):
        if 'dlabel' in l:
            # if we found a new dlabel, means we finished the previous one
            if current:
                symbols[current](data, current)
                current = None
                continue

            symbol = l.split(' ')[-1].strip()
            current = symbol
            data = []
            print('// Starting new dlabel:', current)
            continue

        if not current:
            continue

        if l.strip() == '' or idx == len(lines) - 1:
            symbols[current](data, current)
            current = None
            continue

        if l.strip().startswith('/*'):
            split = l.split('.')[1].strip().split(' ')
            type = split[0]
            value = split[1]
            data.append([type, value])


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('file', help='input file')
    parser.add_argument('mode', help='output mode', default='single or data')
    parser.add_argument('--externs', help='output externs', default='externs.c (only for data mode)')
    parser.add_argument('--symbol', help='output symbol', default='data')
    parser.add_argument('--format', help='output format', default='f32')
    args = parser.parse_args()

    if args.mode == 'file':
        parse_single(args)
    elif args.mode == 'data':
        parse_data(args)