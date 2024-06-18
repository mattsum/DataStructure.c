#include <stdio.h>

int stack[100];
int tos; 	// top of stack  // 전역변수는 초기화 가능

void push(int data) {
   stack[tos] = data;
   ++tos;
}

int pop(void) {
   --tos;
   return stack[tos];
}

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