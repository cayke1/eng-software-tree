#ifndef TREE_H
#define TREE_H

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

typedef struct tree {
    int qty;
    struct node* root;
} tree;

tree* create_tree();
node* create_node(int);
node* search_tree(tree*, int);
tree* add_node(tree*, int);
node* minimum(node*);
node* maximum(node*);
node* remove_node(node*, int);
void PreOrder(node*);

#endif