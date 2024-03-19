cmake_minimum_required(VERSION 3.10)

project(Tree C)

set(HEADER_FILES
    ./tree.h
)

set(SOURCE_FILES
    ./tree.c
    ./main.c
)

add_executable(tree ${SOURCE_FILES} ${HEADER_FILES})

