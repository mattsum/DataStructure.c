#include <stdio.h>
#include "stack.h"

int main(void)
{
   push(100);
   push(200);
   push(300);
   
   printf("1st push() : %d\n", pop());
   printf("2st push() : %d\n", pop());
   printf("3st push() : %d\n", pop());

   return 0;
}