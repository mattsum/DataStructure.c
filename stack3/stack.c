#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initstack(struct stack *ps) {
   ps ->tos = 0;
}

// struct stack {
//    int array[100];
//    int tos;
// };

void push(struct  stack *ps, int data) {
   //stack[tos] = data;
   //++tos;

   if(ps->tos == ARRAYSIZE) {
      printf(stderr, "stack is full\n");
      exit(1);
   }

   ps->array[ps->tos] = data;
   ++ps->tos;
}

int pop(struct stack *ps) {
   if(ps->tos == 0) {
      fprintf(stderr,"stack is empty\n");
      exit(2);
   }

   --ps->tos;
   return ps->array[ps->tos];
}