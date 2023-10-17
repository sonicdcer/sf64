import argparse
import sys
import struct


ARCH_MAGIC = b"!<arch>\n"
ARCH_END = b"`\n"
ARCH_HEADER_LENGTH = 60

ELF_MAGIC = b"\x7fELF"
ELF_FLAG_OFFSET = 36


def patch_elf(f):
    patched = None
    elf_start = f.tell()

    assert (elf_header := f.read(len(ELF_MAGIC))) == ELF_MAGIC

    f.seek(elf_start + ELF_FLAG_OFFSET)
    flags, = struct.unpack(">I", f.read(4))
    if flags & 0xF0001000 == 0x20000000:
        # set EF_MIPS_ABI_O32 flag
        flags |= 0x00001000
        # patch in-place
        f.seek(elf_start + ELF_FLAG_OFFSET)
        f.write(struct.pack(">I", flags))
        patched = True
    elif flags & 0xF0001000 == 0x20001000:
        patched = False

    # return cursor to start of payload
    f.seek(elf_start)

    return patched


def patch_elf_wrapper(f, name, quiet=False):
    res = patch_elf(f)
    if not quiet:
        if res is True:
            print("EF_MIPS_ABI_O32 bit successfully patched in %s" % name)
        elif res is False:
            print("EF_MIPS_ABI_O32 bit already patched in %s" % name)


def patch_ar(f, quiet=False):
    assert (header := f.read(len(ARCH_MAGIC))) == ARCH_MAGIC

    while obj_header := f.read(ARCH_HEADER_LENGTH):
        id, _, _, _, _, size, end = struct.unpack(">16s12s6s6s8s10s2s", obj_header)

        assert end == ARCH_END

        id = id.rstrip().decode("utf8").rstrip("/")
        size = int(size.rstrip().decode("utf8"))

        if id.endswith(".o"):
            patch_elf_wrapper(f, id, quiet=quiet)

        # skip over payload
        f.seek(size + size % 2, 1) # 1 means relative to current position


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("file", help="input file", type=argparse.FileType("r+b"))
    parser.add_argument("--quiet", action="store_true", default=False)
    args = parser.parse_args()

    if args.file.name.endswith(".a"):
        patch_ar(args.file, args.quiet)
    else:
        patch_elf_wrapper(args.file, args.file.name, args.quiet)