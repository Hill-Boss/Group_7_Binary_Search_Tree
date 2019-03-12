#ifndef NODE_H
#define NODE_H

typedef struct node_struct {
	int data;
	struct node_struct* left;
	struct node_struct* right;
} node;

node* newNode(int data);

#endif
