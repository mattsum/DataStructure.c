#ifndef QUEUE_H
#define QUEUE_H

struct queue {
    int array[100];
    int front;
    int rear;
};

void initQueue(struct queue *q);

void push(struct queue *pq, int data);
int pop(struct queue *pq);


#endif