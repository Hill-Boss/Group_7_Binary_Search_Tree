#include <stdio.h>
#include <stdlib.h>
#include "node.h"

node* newNode(int data) {
    node *tmp = malloc(sizeof(node));
    tmp->data = data
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
