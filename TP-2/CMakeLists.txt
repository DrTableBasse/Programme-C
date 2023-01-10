cmake_minimum_required(VERSION 2.8)

project(TP2 C)

set( SRC
    main.c
    suiteRn.c
    equation_2nd_degres.c
)

add_executable(TP2 ${SRC})
target_link_libraries(TP2 m)