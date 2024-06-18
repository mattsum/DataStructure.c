#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void push(struct queue *pq, int data)
{
   
    if (pq->rear == 100){
        fprintf(stderr, "queue is full\n");
        exit(1);
    }
    pq->qArr[pq->rear] = data;
    ++pq->rear;
}

int pop(struct queue *pq)
{
   
    if (pq->front < 0){
        fprintf(stderr, "queue is empty\n");
        exit(2);
    }
    int i = pq->front;
    ++pq->front;
    return pq->qArr[i];    
}

void initQueue(struct queue *pq)
{
    pq->front = 0;
    pq->rear = 0;
}