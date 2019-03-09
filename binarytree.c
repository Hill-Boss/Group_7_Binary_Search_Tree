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
	newNode = (node*)malloc(sizeof(node));
	newNode->data = item;
	
	node* tmpNode = bt->root;
	
	bt->size++;
}

void printinorder(binary_tree* bt) {

}

void printpreorder(binary_tree* bt) {

}

void printpostorder(binary_tree* bt) {

}

int btsize(binary_tree* bt) {

}

int treeheight(binary_tree* bt) {

}
