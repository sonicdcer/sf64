import argparse

char_code = ["END","NWL","NP2","NP3","NP4","NP5","NP6","NP7","NP8","NP9","NPA","NPB","SPC","HSP","QSP","NPF","CLF","CUP","CRT","CDN","AUP","ALF","ADN","ART","L_A","L_B","L_C","L_D","L_E","L_F","L_G","L_H","L_I","L_J","L_K","L_L","L_M","L_N","L_O","L_P","L_Q","L_R","L_S","L_T","L_U","L_V","L_W","L_X","L_Y","L_Z","l_a","l_b","l_c","l_d","l_e","l_f","l_g","l_h","l_i","l_j","l_k","l_l","l_m","l_n","l_o","l_p","l_q","l_r","l_s","l_t","l_u","l_v","l_w","l_x","l_y","l_z","EXM","QST","DSH","CMA","PRD","N_0","N_1","N_2","N_3","N_4","N_5","N_6","N_7","N_8","N_9","APS","LPR","RPR","CLN","PIP"]

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

parser = argparse.ArgumentParser(description='Convert StarFox 64 dialog characters')
parser.add_argument('infile', help="SF64 text file to convert")

if __name__ == '__main__':
    args = parser.parse_args()

    # convert_file(args.infile)
    convert_names(args.infile)
