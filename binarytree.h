#ifndef BINARYTREE_H
#define BINAYTREE_H

#include "node.h"

typedef struct binary_tree_struct {
  int size;
  node *root;
} binary_tree;

void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void nodeinorder(node* node);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
void nodepostorder(node* node);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

#endif
