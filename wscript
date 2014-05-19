#! /usr/bin/env python
## encoding: utf-8

APPNAME = "nerd-golf-tracker"
VERSION = "0.1"

def options(opt):
    opt.load('compiler_c waf_unit_test')
    opt.recurse('contrib/gtest')

def configure(ctx):
    ctx.load('compiler_c waf_unit_test')
    ctx.recurse('contrib/gtest')

def build(bld):
    assemble_executable(bld)
    bld.recurse('contrib/gtest')
    test(bld)

def assemble_executable(bld):
    bld.stlib(
    	source=bld.path.ant_glob('src/*.c'), 
    	includes='src',
    	target='src')
    bld.program(
    	source='src_main/main.c', 
    	includes='src', 
    	target=APPNAME,
        use='src')

def test(bld):
    bld.options.all_tests = True
    bld.program(
        features='test',
        source=bld.path.ant_glob(['test/*.cc']),
        target='unittests',
        includes='contrib/gtest/fused-src src',
        use='gtest src')

    from waflib.Tools import waf_unit_test
    bld.add_post_fun(waf_unit_test.summary)
    bld.add_post_fun(waf_unit_test.set_exit_code)


