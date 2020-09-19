#include <stdio.h>
#include <stdlib.h>


typedef struct element Element;


typedef struct stack Stack;


Stack* createStack();

Element* createElement(int, void *);

void printStack(Stack *);

void push(Stack *, Element *);


int isOperator(char*);