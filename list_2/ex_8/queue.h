#ifndef _QUEUE_
#define _QUEUE_

#include <stdlib.h>
#include <stdio.h>

typedef struct item Item;

typedef struct queue Queue;


Queue *createQueue();

void enqueue(Queue *, void *);

Item* dequeue(Queue *);

void deleteQueue(Queue *);

void printQueue(Queue *, int type);

void* getElement(Item *);

int queueLength(Queue *);


#endif