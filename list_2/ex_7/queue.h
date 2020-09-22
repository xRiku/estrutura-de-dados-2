#ifndef _QUEUE_
#define _QUEUE_

#include <stdlib.h>
#include <stdio.h>

typedef struct item Item;

typedef struct queue Queue;


Queue *createQueue();

void enqueue(Queue *, void *);

int length(Queue *);


#endif