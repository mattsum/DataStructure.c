#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue *pq, int size)
{
    pq->qArr = malloc(sizeof(int) * size);
    pq->size = size;
    pq->front = 0;
    pq->rear = 0;
}
void clearnupQueue(Queue *pq)
{
    free(pq->qArr);
}
void push(Queue *pq, int data)
{
    assert(pq->rear != pq->size);
    pq->qArr[pq->rear] = data;
    ++pq->rear;
}

int pop(Queue *pq, int *qData)
{
    //assert(pq->rear != pq->front);
    
    int i = pq->front;
    ++pq->front;
    
    // return pq->qArr[i];    
    *qData = pq->qArr[i];
}