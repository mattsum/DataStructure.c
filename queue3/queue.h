#ifndef QUEUE_H
#define QUEUE_H
#define ARRAYSIZE 100

struct queue {
    int array[ARRAYSIZE];
    int tos;
};

void initqueue(struct queue *pq);

void push(struct queue *pq, int data);		// func. declaration
int pop(struct queue *pq);

#endif
