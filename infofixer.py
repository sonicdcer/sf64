

def fixinfo(infofile):
    with open(infofile, 'r') as info:
        infolines = info.readlines()
    for i, line in enumerate(infolines):
        if "(Object*);" not in line:
            continue
        badfuncname = line[5:18]
        goodfuncname = infolines[i -1][3:19]
        if(badfuncname == "func_8018FE38"):
            print(badfuncname, goodfuncname)
        infolines[i] = infolines[i].replace(badfuncname,goodfuncname)
        for j, line2 in enumerate(infolines):
            objtype = ''
            if (j > i) and line2.find(badfuncname) != -1:
                # print(line2)
                objtype = line2.split('_')[1]
                if objtype[0] not in '458':
                    objtype = objtype[0] + objtype[1:].lower()
                else:
                    objtype = "Object_" + objtype
                print(objtype)
                # return
                infolines[j] = line2.replace(badfuncname,goodfuncname)
                infolines[i] = infolines[i].replace("Object*);", objtype + '*);')
        
        
    
    print(infolines[100:110])
    print(infolines[730:740])
    with open(infofile, 'w') as info:
        info.writelines(infolines)
        
        
        
    return 0
    
if __name__ == "__main__":
    fixinfo("src/main/fox_edata_1C.c")
