#include <stdio.h>
#include "queue.h"

int main(void){

    struct queue s1, s2;

    initqueue(&s1);
    initqueue(&s2);

    push(&s1, 969);
    push(&s1, 800);
    push(&s1, 700);

    push(100);
    push(200);
    push(300);
    
    printf("1st pop() : %d\n", pop());
    printf("2st pop() : %d\n", pop());
    printf("3st pop() : %d\n", pop());

    pop(&s1);

    push(&s2, 900);
    push(&s2, 800);
    push(&s2, 700);

    printf("s1 1st pop() : %d\n", pop(&s2));
    printf("s1 2nd pop() : %d\n", pop(&s2));
    printf("s1 3rd pop() : %d\n", pop(&s2));

    return 0;
}