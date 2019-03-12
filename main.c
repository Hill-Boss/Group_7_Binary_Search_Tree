#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"
int main(int argc, char * argv []) {

	int currNum;
	bool found;

	binary_tree* bt = malloc(sizeof(binary_tree));

	initialize(bt);

	FILE* inFile = NULL;
	inFile = fopen(argv[1], "r");

	while (!feof(inFile)) {
		fscanf(inFile, " %d", &currNum);
		insert(bt, currNum);
	}

	// printf("Print in order\n");
	// printinorder(bt);

	printf("\nPrint pre order\n");
	printpreorder(bt);

	// printf("\nPrint post order\n");
	// printpostorder(bt);
	// printf("\n");

	// found = search(bt, 33);
	// if (found){
	// printf("FOUND 33\n");
	// }
	//
	// found = search(bt,38);
	// if (found){
	// printf("FOUND 38\n");
	// }

	printf("Number of elements in tree: %d\n", btsize(bt));

	printf("Tree height: %d\n", treeheight(bt));

	return 0;
}
