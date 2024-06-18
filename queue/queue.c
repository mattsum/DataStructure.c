#include <stdio.h>

int queue[100];
int rear;
int front;
void push(int data)
{
    queue[rear] = data;
    ++rear;
}
int pop(void)
{
    int i = front;
    ++front;
    return queue[i];
    //++front;
}
int main(void){

    push(100);
    push(200);
    printf("1st pop() : %d\n", pop());

    push(300);
    
    printf("2st pop() : %d\n", pop());
    printf("3st pop() : %d\n", pop());

    return 0;
}