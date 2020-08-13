project('t_xxhash', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++2a'])


gtest_deps = dependency('gtest', method : 'pkg-config', main: true)


e_xxh64int_test = executable('xxh64_int_test',
           sources: ['xxh64_int_test.cpp'],
           cpp_pch: 'pch/my_pch.h',
           dependencies: [gtest_deps],
           install : false)


test('xxh64int test', e_xxh64_int_test)


