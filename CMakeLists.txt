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