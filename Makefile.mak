HEADERS = binarytree.h node.h


binary.exe: main.o binarytree.o
	gcc main.o binarytree.o -o binary.exe

main.o: main.c binarytree.c binarytree.h node.h
	gcc -Wall -c main.c

binarytree.o: binarytree.c binarytree.h node.h
	gcc -Wall -c binarytree.c

clean:
	rm main.o binarytree.o -o binary.exe
