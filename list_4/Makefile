merge1: merge1.o main.o;
	gcc -o merge1 merge1.o main.o

merge1.o: merge1.c item.h;
	gcc -c merge1.c

main.o: main.c item.h;
	gcc -c main.c

clean:
	rm *.o