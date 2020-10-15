merge8: merge8.o main.o;
	gcc -o merge8 merge8.o main.o

merge8.o: merge8.c item.h;
	gcc -c merge8.c

merge4: merge4.o main.o;
	gcc -o merge4 merge4.o main.o

merge4.o: merge4.c item.h;
	gcc -c merge4.c

merge1: merge1.o main.o;
	gcc -o merge1 merge1.o main.o

merge1.o: merge1.c item.h;
	gcc -c merge1.c

main.o: main.c item.h;
	gcc -c main.c

clean:
	rm *.o