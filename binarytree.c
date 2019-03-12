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

void insert_node(node* root, node* new) {
	printf("%d, %d\n", root->data, new->data);
	// if (root->data < new->data && root->left == NULL) {
	// 	root->left = new;
	// } else if (root->data > new->data && root->right == NULL) {
	// 	root->right = new;
	// } else if (root->data < new->data && root->left != NULL) {
	// 	insert_node(root->left, new);
	// } else if (root->data > new->data && root->right != NULL) {
	// 	insert_node(root->right, new);
	// }
}

void insert(binary_tree* bt, int item) {
	node* newNode = malloc(sizeof(node));
	newNode->data = item;
	newNode->left = NULL;
	newNode->right = NULL;

	insert_node(bt->root, newNode);

	bt->size++;
}

void printinorder_node(node* node) {

}

void printinorder(binary_tree* bt) {
	printinorder_node(bt->root);
}

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

void printpostorder_node(node* node) {

}

void printpostorder(binary_tree* bt) {
	printpostorder_node(bt->root);
}

int btsize(binary_tree* bt) {
	return bt->size;
}

int treeheight_node(node* node) {
	if (node == NULL) {
		return 0;
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
