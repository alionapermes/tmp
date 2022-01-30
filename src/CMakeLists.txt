cmake_minimum_required(VERSION 3.10)


set(EXEC tmp)
set(SRC
    tmp.cpp
    account.cpp
)

find_package(SqliteOrm REQUIRED)

if (DEBUG)
    add_compile_options(-g3 -ggdb)
endif()

add_executable(${EXEC} ${SRC})
target_link_libraries(${EXEC}
    boost_program_options
    sqlite_orm::sqlite_orm
    ${CONAN_LIBS}
)

