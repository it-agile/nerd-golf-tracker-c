#! /usr/bin/env python
## encoding: utf-8

APPNAME = "nerd-golf-tracker"
VERSION = "0.1"

def options(opt):
    opt.load('compiler_cxx waf_unit_test')

def configure(ctx):
    ctx.load('compiler_cxx waf_unit_test')

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

    bld.stlib(
        source='contrib/gtest/gtest-all.cc', 
        includes='contrib', 
        target='gtest')
    bld.program(
        features='test',
        source=bld.path.ant_glob(['test/*.cc']),
        target='unittests',
        includes='contrib src',
        use='gtest src')

    from waflib.Tools import waf_unit_test
    bld.add_post_fun(waf_unit_test.summary)
    bld.add_post_fun(waf_unit_test.set_exit_code)

