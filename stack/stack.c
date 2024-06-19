#include <stdio.h>

// 스택을 저장할 배열과 전역 변수 선언
int stack[100];  // 최대 100개의 요소를 저장할 수 있는 배열
int tos = 0;     // 스택의 최상단(top of stack)을 가리키는 인덱스 (초기값 0)

// 스택에 데이터를 추가하는 함수
void push(int data) {
   stack[tos] = data;  // 스택의 최상단에 데이터를 저장
   ++tos;              // tos 인덱스를 증가시켜 스택의 최상단을 한 칸 위로 이동
}

// 스택에서 데이터를 제거하고 반환하는 함수
int pop(void) {
   --tos;             // tos 인덱스를 감소시켜 스택의 최상단을 한 칸 아래로 이동
   return stack[tos]; // 저장된 데이터를 반환
}

// 메인 함수
int main(void)
{
   push(100);  // 스택에 100 추가
   push(200);  // 스택에 200 추가
   push(300);  // 스택에 300 추가
   
   printf("1st pop() : %d\n", pop());  // 스택에서 데이터 제거 및 출력 (300)
   printf("2nd pop() : %d\n", pop());  // 스택에서 데이터 제거 및 출력 (200)
   printf("3rd pop() : %d\n", pop());  // 스택에서 데이터 제거 및 출력 (100)

   return 0;  // 프로그램 종료
}
