#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

static int queue[100];
static int tos; 	// top of stack  // 전역변수는 초기화 가능

void initqueue(void) {
    pq ->tos = 0;
}
void push(struct queue *pq, int data) {		// func. definition
   
   if(pq->tos == ARRAYSIZE) {
      printf(stderr, "queue is full\n");
      exit(1);
   }
   pq->array[pq->tos] = data;
   ++pq->tos;
}

int pop(struct queue *pq) {
    if(pq->tos == 0) {
       fprintf(stderr, "queue is empty\n");
       exit(2);
    }

    --pq->tos;
    return pq->array[pq->tos];


}
