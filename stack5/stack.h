#ifndef STACK_H
#define STACK_H

typedef struct stack {
    void *pArr;
    int eleSize;
    int size;
    int tos;
} Stack;

void initstack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);

void push(Stack *ps, const void *pData);
int pop(Stack *ps, void *pData);

#endif