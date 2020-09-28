ins: insertion.o main.o
	gcc -o ins insertion.o main.o

insertion.o: insertion.c item.h
	gcc -c insertion.c

sel: selection.o main.o
	gcc -o sel selection.o main.o

selection.o: selection.c item.h
	gcc -c selection.c

main.o: main.c item.h
	gcc -c main.c

clean:
	rm *.o