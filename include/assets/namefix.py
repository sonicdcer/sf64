import os

for subdir, dirs, files in os.walk('.'):
    for file in files:
        with open(file, 'r') as header:
            htxt = header.read()
            
        name = str.upper(file[4:-2])
        print(name)
        htxt = htxt.replace("FIX.", name)
        print(htxt)
        with open(file, 'w') as header:
            header.write(htxt)
