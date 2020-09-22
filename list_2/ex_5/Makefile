all: link clean

link: stack.o bst.o main.o
	gcc -o bst stack.o bst.o main.o

stack.o: stack.c stack.h 
	gcc -c stack.c

bst.o: bst.c bst.h
	gcc -c bst.c

main.o: main.c bst.c
	gcc -c main.c

clean:
	rm *.o