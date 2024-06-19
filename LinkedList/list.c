#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
typedef struct node {
    int data;           // 데이터 필드
    struct node *next;  // 다음 노드를 가리키는 포인터
} Node;

int main(void)
{
    Node *ptr;
    // 첫 번째 노드 생성 및 초기화
    ptr = malloc(sizeof(Node));        // 첫 번째 노드에 메모리 할당
    ptr->data = 1;                     // 첫 번째 노드 데이터 초기화
    ptr->next = malloc(sizeof(Node));  // 두 번째 노드에 메모리 할당
    ptr->next->data = 3;               // 두 번째 노드 데이터 초기화

    // 세 번째 노드 생성 및 초기화
    ptr->next->next = malloc(sizeof(Node));  // 세 번째 노드에 메모리 할당
    ptr->next->next->data = 4;               // 세 번째 노드 데이터 초기화
    ptr->next->next->next = NULL;            // 세 번째 노드의 다음을 NULL로 설정 (리스트의 끝)

    // 두 번째 위치에 노드 삽입
    {
        Node *p = malloc(sizeof(Node));  // 새로운 노드에 메모리 할당
        p->data = 2;                     // 새로운 노드 데이터 초기화
        p->next = ptr->next;             // 새로운 노드의 다음을 기존 두 번째 노드로 설정
        ptr->next = p;                   // 첫 번째 노드의 다음을 새로운 노드로 설정
    }

    // 세 번째 노드 삭제
    {
        Node *p = ptr->next->next;  // 세 번째 노드를 가리킴 (현재 데이터는 3)
        ptr->next->next = p->next;  // 두 번째 노드가 네 번째 노드를 가리키도록 설정
        free(p);                    // 세 번째 노드 메모리 해제
    }

    // 리스트의 모든 노드 출력
    Node *p = ptr;                 // 리스트의 시작을 가리킴
    while(p != NULL){              // 리스트의 끝까지 반복
        printf("%d ", p->data);    // 현재 노드의 데이터 출력
        p = p->next;               // 다음 노드로 이동
    }
    printf("\n");                  // 출력 형식을 위해 줄바꿈 추가

    // 할당된 모든 노드 메모리 해제
    {
        Node *p = ptr;             // 리스트의 시작을 가리킴
        while(p){                  // 리스트의 끝까지 반복
            Node *tmp = p;         // 현재 노드를 임시 변수에 저장
            p = p->next;           // 다음 노드로 이동
            free(tmp);             // 임시 변수에 저장된 현재 노드 메모리 해제
        }
    }

    return 0;  // 프로그램 종료
}
