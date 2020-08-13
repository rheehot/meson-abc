project('hello', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++2a'])


gtest_deps = dependency('gtest', method : 'pkg-config', main: true)

executable('hello',
           sources: ['main.cpp'],
           cpp_pch: 'pch/my_pch.h',
           install : false)


