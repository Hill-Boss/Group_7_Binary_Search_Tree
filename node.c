#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void node* newNode(int data) {
    node *tmp = (node*)malloc(sizeof(node));
    tmp->data = data
    tmp->left = NULL;
    tmp->right = NULL;
    return(tmp);
}