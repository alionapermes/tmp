cmake_minimum_required(VERSION 3.10)


set(EXEC tmp)
set(SRC main.cpp)

if (DEBUG)
    add_compile_options(-g3 -ggdb)
endif()

add_executable(${EXEC} ${SRC})

