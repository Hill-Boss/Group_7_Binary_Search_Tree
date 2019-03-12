#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"

void initialize(binary_tree* bt) {
	bt->size = 0;
	bt->root = NULL;
}

bool search(binary_tree* bt, int key) {
	node* tmpNode = bt->root;

	while (tmpNode != NULL) {
		if (key == tmpNode->data) {
			return True;
		}
		else if (key < tmpNode->data) {
			tmpNode = tmpNode->left;
		}
		else {
			tmpNode = tmpNode->right;
		}
	}

	return False;
}

void insert(binary_tree* bt, int item) {
	node* newNode;
	newNode = malloc(sizeof(node));
	newNode->data = item;

	node* tmpNode = bt->root;

	
	bt->size++;
}

void printinorder_node(node* node) {

}

void printinorder(binary_tree* bt) {
	printinorder_node(bt->root);
}

void printpreorder_node(node* node) {

}

void printpreorder(binary_tree* bt) {
	printpreorder_node(bt->root);
}

void printpostorder_node(node* node) {

}

void printpostorder(binary_tree* bt) {
	printpostorder_node(bt->root);
}

int btsize(binary_tree* bt) {
	return bt->size;
}

int treeheight_node(node* node) {
	if (node == null) {
		return 0;
	}

	int lh = findHeight(node->left);
	int rh = findHeight(node->right);

	if (lh > rh) {
		return lh + 1;
	} else {
		return rh + 1;
	}
}

int treeheight(binary_tree* bt) {
	return treeheight_node(bt->root);
}
