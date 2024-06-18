#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

struct stack {
    int array[ARRAYSIZE];
    int tos;
};

void initstack(struct stack *ps);

void push(struct stack *ps, int data);

int pop(struct stack *ps);

#endif