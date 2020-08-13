project('hello', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++2a'])


gtest_deps = dependency('gtest', method : 'pkg-config', main: true)


executable('hello',
           sources: ['main.cpp'],
           cpp_pch: 'pch/my_pch.h',
           install : false)


e_greet_test = executable('greet_test',
           sources: ['greet_test.cpp'],
           cpp_pch: 'pch/my_pch.h',
           dependencies: [gtest_deps],
           install : false)


test('greet test', e_greet_test)


