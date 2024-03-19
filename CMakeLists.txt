cmake_minimum_required(VERSION 3.10)

project(Tree C)

# Especifique os arquivos de cabeçalho (.h)
set(HEADER_FILES
    ./tree.h
)

# Especifique os arquivos de origem (.c)
set(SOURCE_FILES
    ./tree.c
    ./main.c
)

# Crie o executável
add_executable(tree ${SOURCE_FILES} ${HEADER_FILES})

