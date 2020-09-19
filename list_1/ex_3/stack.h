#include <stdio.h>
#include <stdlib.h>


typedef struct element Element;


typedef struct stack Stack;


Stack* createStack();

Element* createElement(int, void *);

void push(Stack *, Element *);

Element* pop(Stack*);

void printStack(Stack *);

double computeValues(Element *operand1, Element *operand2, Element *operator);   


int isOperator(char*);