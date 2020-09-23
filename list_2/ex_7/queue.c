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
  if (queue->head == NULL) {
    Item *item = malloc(sizeof(Item));
    item->next = NULL;
    item->element = element;
    queue->head = item;
    queue->tail = queue->head;
    queue->length += 1;
  } else {
    Item *item = malloc(sizeof(Item));
    item->next = NULL;
    item->element = element;
    queue->tail->next = item;
    queue->tail = item;
    queue->length += 1;
  }
}

Item* dequeue(Queue *queue) {
  if (queue->head != NULL) {
    Item *item = queue->head;
    queue->head = queue->head->next;
    queue->length -= 1;
    item->next = NULL;
    return item;
  }
}

void deleteQueue(Queue *queue) {
  Item *p = queue->head;
  for (int i = 0; i < queue->length; i++) {
    queue->head = queue->head->next;
    free(p);
  }
  free(queue);
}

int queueLength(Queue *queue) {
  return queue->length;
}