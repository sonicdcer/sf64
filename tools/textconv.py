import argparse

char_code = [
    "END","NWL","NP2","NP3","NP4","NP5","NP6","NP7","NP8","NP9","NPA","NPB","SPC","HSP","QSP","NPF",
    "CLF","CUP","CRT","CDN","AUP","ALF","ADN","ART","_A","_B","_C","_D","_E","_F","_G","_H","_I","_J",
    "_K","_L","_M","_N","_O","_P","_Q","_R","_S","_T","_U","_V","_W","_X","_Y","_Z","_a","_b","_c",
    "_d","_e","_f","_g","_h","_i","_j","_k","_l","_m","_n","_o","_p","_q","_r","_s","_t","_u","_v",
    "_w","_x","_y","_z","EXM","QST","DSH","CMA","PRD","_0","_1","_2","_3","_4","_5","_6","_7","_8",
    "_9","APS","LPR","RPR","CLN","PIP"]

def convert_line(line):
    if 'x' in line or '{' in line or '}' in line:
        return None

    chars = line.split(',')

    if len(chars) <= 1:
        return None

    newchars = [char_code[int(x)] for x in chars[0:-1]]

    return ','.join(newchars) + ',\n'


def convert_file(filepath):
    with open(filepath, 'r') as file:
        file_lines = file.readlines()
    for i, line in enumerate(file_lines):
        newchars = convert_line(line)
        if newchars:
            file_lines[i] = newchars

    with open(filepath, 'w') as file:
        file.writelines(file_lines)
    
    return

def convert_names(filepath):
    with open(filepath, 'r') as file:
        file_text = file.read()
    startidx = file_text.find('gMsgLookup[780] = {\n') + len('gMsgLookup[780] = {\n')
    names = file_text[startidx:-3].split(',')
    names = [x.strip(' \n}{') for x in names]
    namepairs = zip(names[::2], names[1::2])

    for pair in namepairs:
        tname = 'sMsg_ID_' + pair[0]
        file_text = file_text.replace(pair[1], tname)
    with open(filepath, 'w') as file:
        file.write(file_text)
    return

code_to_text = {
    'CLF':'(C<)', 'CUP':'(C^)', 'CRT':'(C>)', 'CDN':'(Cv)', 'AUP':'^', 'ALF':'<', 'ADN':'v',
    'ART':'>','EXM':'!', 'QST':'?', 'DSH':'-', 'CMA':',', 'PRD':'.', 'APS':"'", 'LPR':'(',
    'RPR':')', 'CLN':':', 'PIP':'|'}

def parse_line(line):
    codes = [x.strip() for x in line.split(',')]
    text = ''
    for i, code in enumerate(codes):
        if code.startswith(('NP', 'PRI')) or code == '':
            continue
        elif 'SP' in code:
            if(text and text[-1] != ' '):
                text += ' '
        elif 'NWL' in code:
            if text:
                text += '\n// '
        elif code.startswith('_'):
            text += code.strip('_')
        else:
            text += code_to_text[code]
    return text
        

def add_comments(filepath):
    with open(filepath, 'r') as file:
        file_lines = file.readlines()
    found_text = False
    start_line = 0
    for i, line in enumerate(file_lines):
        if not found_text:
            found_text = line.startswith('u16 gMsg_ID_')
            out_text = '// '
            start_line = i
        elif 'END' in line:
            if out_text.endswith('\n// '):
                out_text = out_text[:-4]
            file_lines[start_line] = out_text + '\n' + file_lines[start_line]
            print(file_lines[start_line])
            found_text = False
        else:
            out_text += parse_line(line)
    with open(filepath, 'w') as file:
        file.writelines(file_lines)
    return
        

parser = argparse.ArgumentParser(description='Convert StarFox 64 dialog characters')
parser.add_argument('infile', help="SF64 text file to convert")

if __name__ == '__main__':
    args = parser.parse_args()

    # convert_file(args.infile)
    # convert_names(args.infile)
    add_comments(args.infile)
