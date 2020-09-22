#ifndef _STACK_
#define _STACK_

#include "stdio.h"
#include "stdlib.h"

typedef struct stack Stack;

typedef struct item Item;

Stack* createStack();

void push(Stack *stack, void *item);

int stackHeight(Stack *stack);


#endif