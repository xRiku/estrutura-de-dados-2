#include "josephus.h"


struct node {
  int number;
  struct node *next;
};

struct list {
  Node* head;
  Node* tail;
  int length;
};


List* createList() {
  List *l = malloc(sizeof(List));
  l->head = NULL;
  l->tail = NULL;
  return l;
}

void fillList(int N, List* list) { 
  for (int i = 0; i < N; i++) {
    Node *node = createNode(i+1);
    appendList(node, list);
  }
}

void appendList(Node *node, List *list) {
  if (list->head == NULL) {
    list->head = node;
    list->tail = list->head;
    list->length += 1;
  } else {
    list->tail->next = node;
    list->tail = list->tail->next;
    list->length += 1;
  }
}

void printList(List *list) {
  for (Node *p = list->head; p != NULL; p = p->next) {
    printf("%d ", p->number);
  }
  putchar('\n');
}

void freeList(List* list) {
  free(list);
}

Node* createNode(int number) {
  Node *n = malloc(sizeof(Node));
  n->number = number;
  n->next = NULL;
  return n;
}


void freeNode(Node *n) {
  free(n);
}
