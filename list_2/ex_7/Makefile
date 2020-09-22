all: link clean

link: queue.o bst.o main.o
	gcc -o bst queue.o bst.o main.o

queue.o: queue.c queue.h 
	gcc -c queue.c

bst.o: bst.c bst.h
	gcc -c bst.c

main.o: main.c bst.c
	gcc -c main.c

clean:
	rm *.o