#! /usr/bin/env python
## encoding: utf-8

APPNAME = "nerd-golf-tracker"
VERSION = "0.1"

def options(opt):
    opt.load('compiler_cxx')

def configure(ctx):
    ctx.load('compiler_cxx')

def build(bld):
    bld.stlib(
    	source=bld.path.ant_glob('src/*.cc'),
    	includes='src',
    	target='src')
    bld.program(
    	source='src_main/main.cc',
    	includes='src',
    	target=APPNAME,
        use='src')

