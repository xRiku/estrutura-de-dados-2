#include "queue.h"

struct item {
  void *element;
  struct item* next;
};

struct queue {
  Item* head;
  Item* tail;
  int length;
};

Queue *createQueue() {
  Queue *queue = malloc(sizeof(Queue));
  queue->head = NULL;
  queue->tail = NULL;
  queue->length = 0;
  return queue;
}

void enqueue(Queue *queue, void *element) {
  if (queue->head = NULL) {
    Item *item = malloc(sizeof(Item));
    item->next = NULL;
    item->element = element;
    queue->head = item;
    queue->tail = queue->head;
    queue->length = 1;
  } else {
    Item *item = malloc(sizeof(Item));
    item->next = queue->head;
    queue->head = item;
    queue->length += 1;
  }
}


int length(Queue *queue) {
  return queue->length;
}