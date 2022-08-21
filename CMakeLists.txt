cmake_minimum_required(VERSION 3.21)
project(atcoder-exp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /execution-charset:SHIFT_JIS /source-charset:UTF-8")

include_directories(include)
# Contest abc_264
add_executable(abc_264_a abc_264/a.cpp)
add_executable(abc_264_b abc_264/b.cpp)

# Contest arc_146
add_executable(arc_146_a arc_146/a.cpp)
# Contest abc_120
add_executable(abc_120_a abc_120/a.cpp)
add_executable(abc_120_b abc_120/b.cpp)
add_executable(abc_120_c abc_120/c.cpp)
add_executable(abc_120_d abc_120/d.cpp)
add_executable(abc_120_e abc_120/e.cpp)
add_executable(abc_120_f abc_120/f.cpp)
