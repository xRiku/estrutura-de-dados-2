all: link clean

link: josephus.o main.o
	gcc -o josephus josephus.o main.o

josephus.o: josephus.c josephus.h
	gcc -c josephus.c

main.o: main.c josephus.h
	gcc -c main.c

clean:
	rm *.o