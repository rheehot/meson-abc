project('t_xxhash', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++2a'])


gtest_dep = dependency('gtest', method: 'pkg-config', main: true)


xxhash_proj = subproject('xxhash')
xxhash_dep = xxhash_proj.get_variable('xxhash_dep')


e_xxh64int_test = executable('xxh64int_test',
           sources: ['xxh64int_test.cpp'],
           cpp_pch: 'pch/my_pch.h',
           dependencies: [xxhash_dep, gtest_dep],
           install : false)


test('xxh64int test', e_xxh64int_test)


