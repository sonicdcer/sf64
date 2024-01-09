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
                    'extern': False,
                    'used': False,
                })

def search_asm(file, path):
    with open(path, 'r') as f:
        lines = f.readlines()
        for line in lines:
            if line.startswith('dlabel'):
                files[file].append({
                    'name': line.split(' ')[1].strip(),
                    'extern': False,
                    'used': False,
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
            print(f' - Scanning {colorama.Fore.YELLOW}{str(path).split("/")[-1]} {colorama.Fore.LIGHTWHITE_EX}for externs and used symbols...')
            buffer = f.readlines()
            for line in buffer:
                for file in files:
                    for symbol in files[file]:
                        if symbol['name'] in line:
                            if line.startswith('extern'):
                                symbol['extern'] = True
                            else:
                                symbol['used'] = True

def print_results():
    global fail
    for file in files:
        for symbol in files[file]:
            if symbol['extern'] and not symbol['used']:
                fail = True
                print(f' - Symbol {colorama.Fore.RED}{symbol["name"]} {colorama.Fore.LIGHTWHITE_EX}is extern but not used on')
                print(colorama.Style.RESET_ALL, end='')

def print_error():
    print(colorama.Fore.LIGHTWHITE_EX +
            "\n BSS could be REORDERED!!\n"
            " Oh! MY GOD!!"
            + colorama.Style.RESET_ALL, file=os.sys.stderr)
    print("", file=os.sys.stderr)


if __name__ == '__main__':
    print(colorama.Fore.LIGHTWHITE_EX, end='')
    print('Parsing .bss.s files...');
    parse_symbols()
    print('Searching for externs and used symbols...');
    scan_code()
    print_results()

    if fail:
        print_error()