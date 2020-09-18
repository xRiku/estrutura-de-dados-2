all: link clean

link: sieve.o main.o
	gcc -o ../exec/int.out sieve.o main.o

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

main.o: main.c sieve.h
	gcc -c main.c 

clean: 
	rm *.o;
