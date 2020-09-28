sel: selection.o main.o
	gcc -o sel selection.o main.o

selection.o: selection.c item.h
	gcc -c selection.c

main.o: main.c item.h
	gcc -c main.c