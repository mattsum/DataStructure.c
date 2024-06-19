#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(struct queue *pq)
{
    pq->front = 0;
    pq->rear = 0;
}

void push(struct queue *pq, int data)
{
   
    // if (pq->rear == QUEUESIZE){
    if (pq->rear == pq->size) {
        fprintf(stderr, "queue is full\n");
        exit(1);
    }
    pq->array[pq->rear] = data;
    ++pq->rear;
}

int pop(struct queue *pq)
{
   
    if (pq->rear == pq->front){
        fprintf(stderr, "queue is empty\n");
        exit(2);
    }
    int i = pq->front;
    ++pq->front;
    
    return pq->array[i];    
}
