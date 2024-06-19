#include <stdio.h>
#include "queue.h"

int main(void)
{

    struct queue q1, q2;
    initQueue(&q1, 10);
    initQueue(&q2, 100);

    push(&q1, 100);
    push(&q1, 200);
    push(&q1, 300);
    

    int re;
    pop(&q1, &re);
    printf("1st pop() : %d\n", re);
    pop(&q1, &re);
    printf("2nd pop() : %d\n", re);
    pop(&q1, &re);
    printf("3rd pop() : %d\n", re);


    push(&q2, 900);
    push(&q2, 800);
    push(&q2, 700);
    
    pop(&q2, &re);
    printf("1st pop() : %d\n", re);
    pop(&q2, &re);
    printf("2nd pop() : %d\n", re);
    pop(&q2, &re);
    printf("3rd pop() : %d\n", re);

    clearnupQueue(&q1);
    clearnupQueue(&q2);
    return 0;
}