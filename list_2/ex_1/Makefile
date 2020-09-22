all: link clean


link: bst.o main.o
	gcc -o bst bst.o main.o

bst.o: bst.c bst.h
	gcc -c bst.c

main.o: main.c bst.h
	gcc -c main.c

clean:
	rm *.o