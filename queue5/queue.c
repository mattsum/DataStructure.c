#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "queue.h"

void push(Queue *pq, int *qData)
{
    assert(pq->rear != pq->size);

    memcpy( (unsigned char*)pq->qArr + (pq->rear * pq->eleSize), qData, pq->eleSize);
    ++pq->rear;
}

void pop(Queue *pq, int *qData)
{
    //assert(pq->front != 0);
    
    int i = pq->front;
    ++pq->front;
    memcpy(qData, (unsigned char*)pq->qArr + (i * pq->eleSize), pq->eleSize);
}

void initQueue(Queue *pq, int size, int eleSize)
{
    pq->qArr = malloc(sizeof(int) * size);
    pq->size = size;
    pq->eleSize = eleSize;
    pq->front = 0;
    pq->rear = 0;
}

void clearQueue(Queue *pq)
{
    free(pq->qArr);
}