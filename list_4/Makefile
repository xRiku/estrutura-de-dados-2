merge2: merge2.o main.o;
	gcc -o merge2 merge2.o main.o

merge2.o: merge2.c item.h;
	gcc -c merge2.c

merge1: merge1.o main.o;
	gcc -o merge1 merge1.o main.o

merge1.o: merge1.c item.h;
	gcc -c merge1.c

main.o: main.c item.h;
	gcc -c main.c

clean:
	rm *.o