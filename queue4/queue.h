#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
    int *qArr;
    int size;
    int front;
    int rear;
} Queue;

void initQueue(Queue *pq, int size);
void clearQueue(Queue *pq);


void push(Queue *pq, int data);
int pop(Queue *pq, int *qData);



#endif