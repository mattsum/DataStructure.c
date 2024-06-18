#ifndef QUEUE_H
#define QUEUE_H

struct queue {
    int qArr[100];
    int front;
    int rear;
};

void push(struct queue *q, int data);
int pop(struct queue *q);
void initQueue(struct queue *q);


#endif