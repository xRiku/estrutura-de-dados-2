#ifndef _SIEVE_
#define _SIEVE_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* createArray(int);


void fillArray(bool*, int);

void markArray(bool*, int);

void printArray(bool*, int);

void freeArray(bool *);

#endif