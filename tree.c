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

node* search_tree(tree* arbol, int info) {
    if(arbol -> qty == 0) return NULL;

    node* temp = arbol -> root;
    do{
        if(temp -> data > info) {
            if(temp -> left != NULL) {
                temp = temp -> left;
            } else {
                return temp;
            }
        } else {
            if(temp -> right != NULL) {
                temp = temp -> right;
            } else {
                return temp;
            }
        }
    }while(temp -> data != info);

    return temp;
}