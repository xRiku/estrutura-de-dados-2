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

void chooseLeader(List *list, int M) {
  int counter = 1;
  Node *q, *r;
  for (Node *p = list->head; list->length > 1; p = p->next) {
    if (counter == M) {
      r = p;
      p = p->next;
      if (list->head == r) {
        list->head = p;
      } 
      if (list->tail == r) {
        list->tail = q;
      }
      q->next = p;
      pop(r, list);
      counter = 1;
    }
    q = p;
    counter += 1;
  }
  putchar('\n');
}


List* createList() {
  List *l = malloc(sizeof(List));
  l->head = NULL;
  l->tail = NULL;
  l->length = 0;
  return l;
}

void fillList(int N, List* list) { 
  for (int i = 0; i < N; i++) {
    Node *node = createNode(i+1);
    appendList(node, list);
  }
  list->tail->next = list->head;
}

void appendList(Node *node, List *list) {
  if (list->head == NULL) {
    list->head = node;
    list->tail = list->head;
    list->length = 1;
  } else {
    list->tail->next = node;
    list->tail = list->tail->next;
    list->length += 1;
  }
}

void pop(Node* n, List *list) {
  printf("%d ", n->number);
  freeNode(n);
  list->length -= 1;
}

void printList(List *list) {
  Node *p = list->head;
  for (int i = 0; i < list->length; i += 1) {
    printf("%d ", p->number);
    p = p->next;
  }
  putchar('\n');
}

void freeList(List* list) {
  for (Node *p = list->head; list->head != list->tail;) {
    list->head = list->head->next;
    free(p);
    p = list->head;
  }
  free(list->head);
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
