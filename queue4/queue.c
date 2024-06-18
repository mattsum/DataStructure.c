#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void push(Queue *pq, int data)
{
    assert(pq->rear != pq->size);

    pq->qArr[pq->rear] = data;
    ++pq->rear;
}

void pop(Queue *pq, int *qData)
{
    //assert(pq->front != 0);
    
    int i = pq->front;
    ++pq->front;
    // return pq->qArr[i];    
    *qData = pq->qArr[i];
}

void initQueue(Queue *pq, int size)
{
    pq->qArr = malloc(sizeof(int) * size);
    pq->size = size;
    pq->front = 0;
    pq->rear = 0;
}

void clearQueue(Queue *pq)
{
    free(pq->qArr);
}