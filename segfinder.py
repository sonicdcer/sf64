import re
import os

ovl_setup_dict = {"_co":"Corneria", "_me":"Meteo", "_sy":"SectorY", "_sx":"SectorX", "_sz":"SectorZ", "_zo":"Zoness", "_fo":"Fortuna", "_ka":"Katina", "_bo":"Bolse", "_ve1":"Venom1", "_andross":"Andross", "_ve2":"Venom2", "_so":"Solar", "_aq":"Aquas", "_ti":"Titania", "_ti_cs":"Titania", "_a6":"Area6", "_title":"Title", "_option":"Option", "_map":"Map", "_ending_1":"Ending", "_ending_2":"Ending","_tr":"Training","_tr360":"Training"}

def fetch_ovl_setup(ovl_name):
    with open("src/main/fox_load_inits.c", "r") as setup_file:
        setups = setup_file.readlines()
    setup_name = ovl_setup_dict["_" + '_'.join(ovl_name.split("_")[1:])]
    assets = [None] * 16
    for i, line in enumerate(setups):
        if setup_name not in line:
            continue
        setup_count = int(line.split('[')[1][0])
        while(setup_count > 0):
            for j in range(16):
                if "ROM_SEGMENT" in setups[i + j + 1]:
                    asset_name = setups[i + j + 1].split(')')[0].split('(')[1]
                    if assets[j] and assets[j] != asset_name:
                        assets[j] = "segment_conflict"
                    else:
                        assets[j] = asset_name
            setup_count -= 1
            i += 16
        break
    print(assets)
    return assets

def find_segment_symbols(ovl_path):
    seg_regex = re.compile(r'D_[1-9A-F]0[0-9A-F]{5}(?=[^0-9A-F])')
    with open(ovl_path, 'r') as ovl_file:
        ovl_src = ovl_file.read()
    segs_all = seg_regex.findall(ovl_src)
    segs_all = list(set(segs_all))
    return segs_all

def find_symbol_def(seg, ovl_path):
    with open(ovl_path, 'r') as ovl_file:
        ovl_src = ovl_file.readlines()
    sym_def = None
    for i, line in enumerate(ovl_src):
        if seg in line and "extern" in line:
            sym_def = line
            # print("Definition found in overlay.")
            break
    if not sym_def:
        with open("include/assets.h", "r") as var_file:
            var_defs = var_file.readlines()  
        for i, line in enumerate(var_defs):
            if seg in line and "extern" in line:
                sym_def = line
                # print("Definition found in assets.")
                break
    if not sym_def:
        sym_def = seg + " undefined\n"
        print("No definition found for " + seg + " in expected places.")
    return sym_def

def make_symbol_defs(ovl_path):
    symbols = find_segment_symbols(ovl_path)
    defs = []
    for seg in symbols:
        defs += [find_symbol_def(seg, ovl_path)]
    return defs

def get_seg_number(sym):
    return int(sym[2], 16)

def create_headers(ovl_path):
    assets = fetch_ovl_setup(ovl_path.split('/')[-1].rstrip('.c'))
    symbols = find_segment_symbols(ovl_path)
    sym_defs = make_symbol_defs(ovl_path)
    for i, asset in enumerate(assets):
        if not asset or asset == "segment_conflict":
            continue
        with open("include/assets/" + asset + ".h", 'r') as header_src:
            header_txt = header_src.readlines()
        for symbol, defn in zip(symbols, sym_defs):
            if i == get_seg_number(symbol) and defn not in header_txt:
                header_txt = header_txt[:-3] + [defn] + header_txt[-3:]
        # with open("include/assets/" + asset + ".h", 'w') as header_src:
        #      header_src.writelines(header_txt)
    
    return

def create_all_headers(overlay_dir):
    for subdir, dirs, files in os.walk(overlay_dir):
        for file in files:
            if file.endswith('.c'):
                create_headers(file)
    return


                



# fetch_ovl_setup("fox_ti_cs")
# print(find_segment_symbols("src/overlays/ovl_i3/fox_zo.c"))
# create_headers("src/overlays/ovl_i5/fox_ti_cs.c")

create_all_headers('src/overlays')