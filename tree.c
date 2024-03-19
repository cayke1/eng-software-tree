#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

tree* create_tree() {
    tree* arbol = (tree*)malloc(sizeof(tree));
    arbol -> qty = 0;
    arbol -> root = NULL;
    return arbol;
}

node* create_node(int info) {
    node* no = (node*)malloc(sizeof(node));
    no -> data = info;
    no -> left = NULL;
    no -> right = NULL;
    return no;
}