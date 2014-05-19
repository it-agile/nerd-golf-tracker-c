#! /usr/bin/env python
## encoding: utf-8

import sys

APPNAME = "nerd-golf-tracker"
VERSION = "0.1"

def options(opt):
    opt.load('compiler_cxx waf_unit_test')

def configure(ctx):
    ctx.load('compiler_cxx waf_unit_test')
    configure_gtest(ctx)

def build(bld):
    assemble_executable(bld)
    build_gtest(bld)
    test(bld)

def assemble_executable(bld):
    bld.stlib(
    	source=bld.path.ant_glob('src/*.cc'), 
    	includes='src',
    	target='src')
    bld.program(
    	source='src_main/main.cc', 
    	includes='src', 
    	target=APPNAME,
        use='src')

def test(bld):
    bld.program(
        features='test',
        source=bld.path.ant_glob(['test/*.cc']),
        target='unittests',
        includes='contrib src',
        use='gtest src')

    from waflib.Tools import waf_unit_test
    bld.add_post_fun(waf_unit_test.summary)
    bld.add_post_fun(waf_unit_test.set_exit_code)


def configure_gtest(ctx):
    if linux():
        if not ctx.env['LIB_PTHREAD']:
            ctx.check_cxx(lib='pthread')

def build_gtest(bld):
    use_flags = []
    if linux():
        use_flags += ['PTHREAD']
    bld.stlib(
        source='contrib/gtest/gtest-all.cc', 
        includes='contrib', 
        use=use_flags,
        target='gtest')

def linux():
    return sys.platform == 'linux2'
