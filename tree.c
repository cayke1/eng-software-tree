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

node* minimum(node* temp) {
    while(temp -> left != NULL) {
        temp = temp -> left;
    }
    return temp;
}

node* maximum(node* temp) {
    while(temp -> right != NULL) {
        temp = temp -> right;
    }
    return temp;
}

node* remove_node(node* temp, int info) {
    if(temp == NULL) {
        printf("Empty tree!\n");
        return temp;
    } else {
        if(temp -> data == info) {
            if(temp -> left == NULL && temp -> right == NULL) {
                free(temp);
                return NULL;
            } else {
                if(temp -> left == NULL || temp -> right == NULL) {
                    node* temp2;
                    if(temp -> left != NULL) {
                        temp2 = temp -> left;
                    } else {
                        temp2 = temp -> right;
                    }
                    free(temp);
                    return temp2;
                } else {
                    node* temp3 = temp -> left;
                    maximum(temp3);
                    temp -> data = temp3 -> data;
                    temp3 -> data = info;
                    temp -> left = remove_node(temp -> left, info);
                }
            }
        } else {
            if(temp -> data > info) {
                temp -> left = remove_node(temp -> left, info);
            } else {
                temp -> right = remove_node(temp -> right, info);
            }
        }

        return temp;
    }
}

void pre_order(node* temp){
    if(temp == NULL) return;

    printf("%d ", temp -> data);
    pre_order(temp -> left);
    pre_order(temp -> right);
}