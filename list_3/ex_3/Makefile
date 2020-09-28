bub: bubble.o main.o
	gcc -o bub bubble.o main.o

bubble.o: bubble.c item.h
	gcc -c bubble.c

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