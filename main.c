#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"
int main(int argc, char * argv []) {

	if (argc != 2) {
		printf("Incorrect number of arguments.\n");
		return -1;
	}

	//Declaring variables
	int currNum;
	bool found;

	//Declaring binary tree
	binary_tree* bt = malloc(sizeof(binary_tree));

	//Initializing binary tree
	initialize(bt);

	//Reading in file from command line
	FILE* inFile = NULL;
	inFile = fopen(argv[1], "r");

	if (inFile == NULL) {
		printf("Unable to open file.\n");
		return -1;
	}

	//Reading in and inserting numbers from the file into the binary tree
	while (!feof(inFile)) {
		fscanf(inFile, " %d", &currNum);
		insert(bt, currNum);
	}

	//Printing numbers in numerical order
	printf("\nPrint in order\n");
	printinorder(bt);

	//Printing numbers as they appear in the file
	printf("\nPrint pre order\n");
	printpreorder(bt);

	//Printing binary tree depth first
	printf("\nPrint post order\n");
	printpostorder(bt);

	//Searching for value
	found = search(bt, 33);
	if (found){
		printf("\nFOUND 33\n");
	}

	found = search(bt, 38);
	if (found){
		printf("\nFOUND 38\n");
	}

	//Printing out additional binary tree data
	printf("\nNumber of elements in tree: %d\n", btsize(bt));

	printf("Tree height: %d\n", treeheight(bt));

	return 0;
}
