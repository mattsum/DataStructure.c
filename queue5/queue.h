#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
    void *pArr;
    int size;
    int eleSize;
    int front;
    int rear;
} Queue;

void initQueue(Queue *pq, int size, int eleSize);
void cleanupQueue(Queue *pq);

void push(Queue *pq, const void *qData);
void pop(Queue *pq, void *qData);



#endif