#include <stdio.h>

// 큐를 저장할 배열과 전역 변수 선언
int queue[100];  // 최대 100개의 요소를 저장할 수 있는 배열
int rear = 0;    // 큐의 끝 부분을 가리키는 인덱스 (초기값 0)
int front = 0;   // 큐의 앞 부분을 가리키는 인덱스 (초기값 0)

// 큐에 데이터를 추가하는 함수
void push(int data)
{
    queue[rear] = data;  // 큐의 끝 부분에 데이터를 저장
    ++rear;              // rear 인덱스를 증가시켜 큐의 끝을 한 칸 뒤로 이동
}

// 큐에서 데이터를 제거하고 반환하는 함수
int pop(void)
{
    int i = front;  // 큐의 앞 부분 인덱스를 임시 변수에 저장
    ++front;        // front 인덱스를 증가시켜 큐의 앞을 한 칸 뒤로 이동
    return queue[i]; // 저장한 인덱스의 데이터를 반환
}

// 메인 함수
int main(void)
{
    push(100);  // 큐에 100 추가
    push(200);  // 큐에 200 추가
    printf("1st pop() : %d\n", pop());  // 큐에서 데이터 제거 및 출력 (100)

    push(300);  // 큐에 300 추가
    
    printf("2nd pop() : %d\n", pop());  // 큐에서 데이터 제거 및 출력 (200)
    printf("3rd pop() : %d\n", pop());  // 큐에서 데이터 제거 및 출력 (300)

    return 0;  // 프로그램 종료
}
