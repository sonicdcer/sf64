import sys
import getopt
import argparse
import struct


def main(argv):
    outputfile = ""
    opts, args = getopt.getopt(argv,"p:f:o:",["print=","file=","output="])
    out = ""
    toFile = False
    toPrint = True
    for opt, arg in opts:
        if opt in ("-f", "--file"):
            f = open(arg, "r")
            for line in f:
                if "dlabel " in line:
                    label = line.split("dlabel ", 1)[1]
                    out += "\n"
                    out += label.split("\n",1)[0]
                    out += "\n"
                elif " .float " in line:
                    seg = line.split(" .float ", 1)[1]
                    out += seg.split("\n",1)[0] + ".0f"
                    out += "\n"
                elif " .word 0x" in line:
                    seg = line.split(" .word 0x", 1)[1]
                    if len(seg) == 9:
                        out += str(struct.unpack('!f', bytes.fromhex(seg))[0]) + "f"
                        out += "\n"
                elif " .asciz \"" in line:
                    seg = line.split(" .asciz \"", 1)[1]
                    length = len(seg) - 1
                    if length <= 4:
                        segStr = ""
                        for letter in seg:
                            if letter == '\"':
                                break
                            segStr += format(ord(letter), "x")
                        for a in range (4 - length + 1):
                            segStr += "00"
                        out += str(struct.unpack('!f', bytes.fromhex(segStr))[0]) + "f"
                        out += "\n"
        elif opt in ("-o", "--output"):
            outputfile = arg
            toFile = True
        elif opt in ("-p", "--print"):
            if arg == "false":
                toPrint = False
    if toPrint:
        print(out)
    if toFile:
        outFile = open(outputfile, "a")
        outFile.write(out)
        outFile.close()
                    
            
    sys.exit()

if __name__ == "__main__":
    main(sys.argv[1:])