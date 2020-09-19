#include "stack.h"

struct element {
  int id;
  void *item;
  struct element *next;
};

struct stack {
  int height;
  Element *head;
};


Stack* createStack() {
  Stack *s = malloc(sizeof(Stack));
  s->height = 0;
  s->head = NULL;
  return s;
}

Element* createElement(int type, void *item) {
  Element *element = malloc(sizeof(Element));
  element->id = type;
  element->item = item;
  element->next = NULL;
  return element;
}

void printStack(Stack *stack) {
  Element *p = stack->head;
  for (int i = 0; i < stack->height; i++) {
    if (p->id == 1) {
      printf("%.3lf ", p->item);
    } else {
      printf("%c ", p->item);
    }
    p = p->next;
  }
  putchar('\n');
}


int isOperator(char *c) {
  switch(*c) {
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
      return 1;
    default:
      return 0;
  }
}