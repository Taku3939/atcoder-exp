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
# Contest abc_263
add_executable(abc_263_a abc_263/a.cpp)
add_executable(abc_263_b abc_263/b.cpp)
add_executable(abc_263_c abc_263/c.cpp)

# Contest abc_265
add_executable(abc_265_a abc_265/a.cpp)
add_executable(abc_265_b abc_265/b.cpp)
