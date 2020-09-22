#ifndef _STACK_
#define _STACK_

#include "stdio.h"
#include "stdlib.h"

typedef struct stack Stack;

typedef struct item Item;

Stack* createStack();

void push(Stack *stack, void *item);

Item* pop(Stack *stack);

int stackHeight(Stack *stack);


#endif