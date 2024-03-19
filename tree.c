#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

tree* create_tree() {
    tree* arbol = (tree*)malloc(sizeof(tree));
    arbol -> qty = 0;
    arbol -> root = NULL;
    return arbol;
}