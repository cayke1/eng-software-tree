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

tree* add_node(tree* arbol, int info) {
    if(arbol -> qty == 0) {
        node* temp = create_node(info);
        arbol -> qty++;
        arbol -> root = temp;
        return arbol;
    } else {
        node* temp = search_tree(arbol, info);
        if(temp -> data == info) {
            printf("Value already exist. Try another!\n");
            return arbol;
        } else {
            node* temp2 = create_node(info);
            if(temp -> data > info) {
                temp -> left = temp2;
                arbol -> qty++;
                return arbol;
            } else {
                temp -> right = temp2;
                arbol -> qty++;
                return arbol;
            }
        }
    }
}