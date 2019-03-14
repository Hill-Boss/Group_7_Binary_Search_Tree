#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"

//Nick
void initialize(binary_tree* bt) {
	//Giving tree's size value zero
	bt->size = 0;
	//Giving tree's node pointer value NULL
	bt->root = NULL;
}
//Nick
bool search(binary_tree* bt, int key) {
	//Declaring temporary node pointer
	node* tmpNode = bt->root;

	//Iterating through binary tree
	while (tmpNode != NULL) {

		//Checking if root value is key
		if (key == tmpNode->data) {
			return true;
		}

		//Checking if key is less than current node's data
		else if (key < tmpNode->data) {
			tmpNode = tmpNode->left;
		}

		//Checking if key is greater than current node's data
		else {
			tmpNode = tmpNode->right;
		}
	}

	return false;
}

// Cody
void insert_node(node* root, node* new) {
	// if the left is null and the newNode needs to be on the left of root put it there
	if (root->data > new->data && root->left == NULL) {
		root->left = new;
	}
	// if the right is null and the newNode needs to be on the right of root put it there
	else if (root->data < new->data && root->right == NULL) {
		root->right = new;
	}
	// insert new to the left of root
	else if (root->data > new->data && root->left != NULL) {
		insert_node(root->left, new);
	}
	// insert new to the right of root
	else if (root->data < new->data && root->right != NULL) {
		insert_node(root->right, new);
	}
}

void insert(binary_tree* bt, int item) {
	if (!search(bt, item)) {
		// make new node
		node* newNode = malloc(sizeof(node));
		newNode->data = item;
		// if root is null new is root
		if (bt->root == NULL) {
			bt->root = newNode;
		}
		// else find where new should go and put it there
		else {
			insert_node(bt->root, newNode);
		}
		bt->size++;
	}
}

//Nick
void nodeinorder(node* node) {
	//Making sure that node is not NULL
	if (node != NULL) {
		//Traversing through bt and printing
		nodeinorder(node->left);
		printf("%d ", node->data);
		nodeinorder(node->right);
	}
}

void printinorder(binary_tree* bt) {
	//Passing nodeinorder bt's root node
	nodeinorder(bt->root);
}

// Cody
void printpreorder_node(node* node) {
	// if node not null print node->data and the print the node->left and node->right
	if (node != NULL) {
		printf("%d ", node->data);
		printpreorder_node(node->left);
		printpreorder_node(node->right);
	}
}

// Cody
void printpreorder(binary_tree* bt) {
	// pass bt->root into a method that takes node as argument
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
	// return bt->size;
	return bt->size;
}

// Cody
int treeheight_node(node* node) {
	// if we reach a leaf return -1 because we went to far
	if (node == NULL) {
		return -1;
	}

	// get the height of left subtree
	int lh = treeheight_node(node->left);
	// get the height of right subtree
	int rh = treeheight_node(node->right);

	// return max(lh,rh) + 1
 	if (lh > rh) {
		return lh + 1;
	} else {
		return rh + 1;
	}
}

// Cody
int treeheight(binary_tree* bt) {
	// pass bt->root into method that takes node as argument
	return treeheight_node(bt->root);
}
