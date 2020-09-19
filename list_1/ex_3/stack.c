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

void push(Stack *stack, Element *element) {
  double *d = element->item;
  printf("%lf\n", *d);
  if (stack->head == NULL) {
    stack->head = element;
    stack->height = 1;
  } else {
    element->next = stack->head;
    stack->head = element;
    stack->height += 1;
  }
}

void printStack(Stack *stack) {
  Element *p = stack->head;
  for (int i = 0; i < stack->height; i++) {
    double *d = p->item;
    printf("%.3lf ", *d);

    // if (p->id == 1) {
    // } else {
    //   char *c = p->item;
    //   printf("%c ",  *c);
    // }
    p = p->next;
  }
  putchar('\n');
}



int isOperator(char *c) {
  switch(*c) {
    case '+':
    case '-':
    case '*':
    case '/':
      return 1;
    default:
      return 0;
  }
}