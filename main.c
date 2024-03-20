#include <stdio.h>
#include "tree.h"

int main(void)
{
    int opt;
    tree *arbol = create_tree();

    printf("#### COMPLETE BINARY TREE ####\n");

    do
    {
        printf("\nOPTIONS:\n");
        printf("1 - Add node\n");
        printf("2 - Remove Node\n");
        printf("3 - Node qty\n");
        printf("4 - Tree sequence in Pre Order\n");
        printf("0 - Exit\n\n");

        printf("Option: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("Value: ");
            int temp;
            scanf("%d", &temp);
            add_node(arbol, temp);
            break;

        case 2:
            if(arbol -> qty == 0) {
                printf("\nEmpty tree!\n");
                break;
            }

            printf("Value to remove: ");
            int temp2;
            node* temp3;
            scanf("%d", &temp2);
            temp3 = search_tree(arbol, temp2);

            if(temp3 -> data == temp2){
                remove_node(arbol -> root, temp2);
                arbol -> qty--;
                printf("Pre order: ");
                pre_order(arbol -> root);
                printf("\nQty: %d\n", arbol -> qty);
                break;
            } else {
                printf("Node do not exist!\n\n");
                break;
            }

        case 3:
            printf("\nNode quantity: %d", arbol->qty);
            printf("\n");
            break;

        case 4:
            if (arbol->qty == 0)
            {
                printf("\nEmpty Tree!\n");
                break;
            }
            else
            {
                printf("\nPre Order: ");
                pre_order(arbol->root);
                printf("\n\n");
                break;
            }
        }
    } while (opt != 0);
}