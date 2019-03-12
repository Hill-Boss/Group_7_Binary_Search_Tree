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
			return true;
		}
		else if (key < tmpNode->data) {
			tmpNode = tmpNode->left;
		}
		else {
			tmpNode = tmpNode->right;
		}
	}

	return false;
}

// Cody
void insert_node(node* root, node* new) {
	if (root->data > new->data && root->left == NULL) {
		root->left = new;
	} else if (root->data < new->data && root->right == NULL) {
		root->right = new;
	} else if (root->data > new->data && root->left != NULL) {
		insert_node(root->left, new);
	} else if (root->data < new->data && root->right != NULL) {
		insert_node(root->right, new);
	}
}

void insert(binary_tree* bt, int item) {
	node* newNode = malloc(sizeof(node));
	newNode->data = item;
	newNode->left = NULL;
	newNode->right = NULL;

	if (bt->root == NULL) {
		bt->root = newNode;
	} else {
		insert_node(bt->root, newNode);
	}

	bt->size++;
}

void nodeinorder(node* node) {
	if (node != NULL) {
		nodeinorder(node->left);
		printf("%d ", node->data);
		nodeinorder(node->right);
	}
}

void printinorder(binary_tree* bt) {
	nodeinorder(bt->root);
}

// Cody
void printpreorder_node(node* node) {
	if (node != NULL) {
		printf("%d ", node->data);
		printpreorder_node(node->left);
		printpreorder_node(node->right);
	}
}

void printpreorder(binary_tree* bt) {
	printpreorder_node(bt->root);
}

void nodepostorder(node* node) {
	if (node != NULL) {
		nodepostorder(node->left);
		nodepostorder(node->right);
		printf("%d " , node->data);
	}
}

void printpostorder(binary_tree* bt) {
	nodepostorder(bt->root);
}

// Cody
int btsize(binary_tree* bt) {
	return bt->size;
}

// Cody
int treeheight_node(node* node) {
	if (node == NULL) {
		return -1;
	}

	int lh = treeheight_node(node->left);
	int rh = treeheight_node(node->right);

	if (lh > rh) {
		return lh + 1;
	} else {
		return rh + 1;
	}
}

int treeheight(binary_tree* bt) {
	return treeheight_node(bt->root);
}
