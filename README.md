Cody Hillboss, Jacob Bexten, Nicholas Shepard

Group_7_Binary_Search_Tree

node.h:

	-Defining node struct type

binarytree.h:

	(Given at start of project)
	-Defining binary tree struct type
	-Declaring functions for working with a binary tree

binarytree.c:

	-Importing modules and binarytree.h
	-Defining functions declared in binarytree.h

main.c:

	-Importing modules and binarytree.h
	-Passing argc and argv as arguments to main function
	-Declaring variables used
	-Declaring and initializing a binary tree
	-Declaring a file to be read in through the terminal
	-Reading in data from files, insert in binary tree
	-Calling the earlier defined functions for displaying data about the binary tree

test_Script:

	-Make binary.exe (if its already made this doesn't change anything)
	-Test 3 files: test1.txt, test2.txt, test3.txt
	-Use diff to see if the output of binary.txt matches what it is supposed to
		comparing file# with f# where file# is the output and f# is the correct result
	-Test with incorrect number of arguments
	-Test with a file that doesn't exist
	-Remove file# (binary.exe outputs that were put into a file)
