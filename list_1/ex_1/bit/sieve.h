#ifndef _SIEVE_
#define _SIEVE_

#include <stdio.h>
#include <stdlib.h>


char* createArray(int);


void fillArray(char*, int);

void markArray(char*, int);

void printArray(char*, int);

void freeArray(char *);

#endif