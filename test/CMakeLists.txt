cmake_minimum_required(VERSION 3.10)


set(EXEC test)
set(SRC test.cpp)

find_package(GTest REQUIRED)

if (DEBUG)
    add_compile_options(-g3 -ggdb)
endif()

include_directories(${GTEST_INCLUDE_DIRS})
add_executable(${EXEC} ${SRC})

target_link_libraries(${EXEC} ${GTEST_LIBRARIES} pthread)

