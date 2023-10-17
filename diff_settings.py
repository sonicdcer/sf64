#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'baserom.us.z64'
    config['myimg'] = 'build/starfox64.us.uncompressed.z64'
    config['mapfile'] = 'build/starfox64.us.map'
    config['source_directories'] = ['./src','./include']
    config['objdump_flags'] = ['-M','reg-names=32']
    config['makeflags'] = ["KEEP_MDEBUG=1"]