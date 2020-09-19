#include <stdio.h>
#include <stdlib.h>


typedef struct element Element;


typedef struct stack Stack;


Stack* createStack();

Element* createElement(int, void *);

void push(Stack *, Element *);

void printStack(Stack *);



int isOperator(char*);