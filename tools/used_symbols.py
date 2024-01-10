#!/usr/bin/env python3
from pathlib import Path
import re
import os
import colorama

colorama.init()

files = {}
fail = False
pattern = r'\b\w+\s+\w+(.*?)?\s*=\s*(?:;|{)?'

def clean_symbol(s):
    s = s.strip()
    if(s.startswith('static')):
        s = ' '.join(s.split(' ')[1:])
    if(s.startswith('/* static */')):
        s = ' '.join(s.split(' ')[3:])
    if(s.startswith('const')):
        s = ' '.join(s.split(' ')[1:])
    if(s.startswith('extern')):
        s = ' '.join(s.split(' ')[1:])
    if('[' in s):
        s = s.split('[')[0]

    return re.sub(r'[\[\];]', '', s).split(' ')[1]

def search_c(file, path):
    with open(path, 'r') as f:
        lines = f.readlines()
        for line in lines:
            search = re.findall(pattern, line)
            if search and not line.startswith('#') and not line.startswith('    ') and not '//' in line and len(line.strip()) > 0:
                files[file].append({
                    'name': clean_symbol(line),
                    'used': [],
                    'global': False,
                })

def search_asm(file, path):
    with open(path, 'r') as f:
        lines = f.readlines()
        for line in lines:
            if line.startswith('dlabel'):
                files[file].append({
                    'name': line.split(' ')[1].strip(),
                    'used': [],
                    'global': False,
                })

def init_file(file):
    if file not in files:
        files[file] = []

def parse_symbols():
    for path in Path('src').rglob('*.c'):
        file = str(path).split('/')[-1].split('.')[0]
        init_file(file)
        search_c(file, path)

    for path in Path('asm').rglob('*.s'):
        file = str(path).split('/')[-1].split('.')[0]
        if file not in files:
            continue
        search_asm(file, path)

def scan_code():
    for path in Path('src').rglob('*.c'):
        with open(path, 'r') as f:
            print(f' - Scanning symbols on {colorama.Fore.YELLOW}{str(path).split("/")[-1]}{colorama.Fore.LIGHTWHITE_EX}')
            buffer = f.readlines()
            for line in buffer:
                for file in files:
                    for symbol in files[file]:
                        if symbol['name'] in line:
                            if not line.strip().startswith('extern'):
                                found = str(path).split('/')[-1].split('.')[0]
                                if found not in symbol['used']:
                                    symbol['used'].append(found)

def scan_variables():
    with open('include/variables.h', 'r') as f:
        buffer = f.readlines()
        for line in buffer:
            if line.strip().startswith('extern'):
                symbol = clean_symbol(line.strip())
                for file in files:
                    for s in files[file]:
                        if s['name'] == symbol:
                            s['global'] = True

def print_results():
    global fail
    output = {}
    for file in files:
        for symbol in files[file]:
            for used in symbol['used']:
                if used != file and symbol['global']:
                    if used not in output:
                        output[used] = []
                    print(f' - Symbol {colorama.Fore.LIGHTBLUE_EX}{symbol["name"]} {colorama.Fore.LIGHTWHITE_EX}is used on {colorama.Fore.LIGHTMAGENTA_EX}{used} {colorama.Fore.LIGHTWHITE_EX}is used on {colorama.Fore.LIGHTWHITE_EX}defined on {colorama.Fore.LIGHTGREEN_EX}{file}' + f'{colorama.Fore.LIGHTWHITE_EX} and is global' if symbol['global'] else '')
                    output[used].append({
                        'name': symbol['name'],
                        'file': file,
                    })
                    fail = True

    print(f'{colorama.Fore.LIGHTWHITE_EX} - Writing to file...')
    # Write to file
    with open('symbols.csv', 'w') as f:
        max = 0
        for file in output:
            f.write(f'{file},')
            max = max + len(output[file])
        f.write('\n')

        keys = list(output.keys())
        for i in range(0, max):
            for key in keys:
                if len(output[key]) > i:
                    f.write(f'{output[key][i]["file"]}: {output[key][i]["name"]},')
                else:
                    f.write(',')
            f.write('\n')
        print(f'{colorama.Fore.GREEN} - Done, Good luck!')


def print_error():
    print(colorama.Fore.LIGHTWHITE_EX +
            "\n BSS could be REORDERED!!\n"
            " Oh! MY GOD!!", file=os.sys.stderr)
    print("", file=os.sys.stderr)


if __name__ == '__main__':

    print(colorama.Fore.LIGHTWHITE_EX, end='')
    print('Parsing .bss.s files...');
    parse_symbols()
    print('Searching for used symbols...');
    scan_code()
    scan_variables()
    print_results()

    if fail:
        print_error()