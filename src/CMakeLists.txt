cmake_minimum_required(VERSION 3.10)

find_package(SqliteOrm REQUIRED)


set(EXEC tmp)
set(SRC
    tmp.cpp
    account.cpp
)

if (DEBUG)
    add_compile_options(-g3 -ggdb)
endif()

add_executable(${EXEC} ${SRC})
target_link_libraries(${EXEC}
    sqlite_orm::sqlite_orm
    ${CONAN_LIBS}
    pthread
)

