#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "queue.h"

void initQueue(Queue *pq, int size, int eleSize)
{
    pq->pArr = malloc(sizeof(int) * size);
    assert(pq->pArr /*!=NULL*/);
    pq->size = size;
    pq->eleSize = eleSize;
    pq->front = 0;
    pq->rear = 0;
}

void cleanupQueue(Queue *pq)
{
    free(pq->pArr);
}

void push(Queue *pq, int *qData, int eleSize)
{
    assert(pq->rear != pq->size);

    //memcpy(&pq->pArr[pq->rear * pq->eleSize], qData, pq->eleSize);
    memcpy( (unsigned char*)pq->pArr + (pq->eleSize * pq->rear), qData, pq->eleSize);
    ++pq->rear;
}

void pop(Queue *pq, int *qData)
{
    //assert(pq->front != 0);
    
    int i = pq->front;
    ++pq->front;
    //memcpy(pdata, &pq->pArr[i], pq->eleSize);
    memcpy(qData, (unsigned char*)pq->pArr + (i * pq->eleSize), pq->eleSize);
}
