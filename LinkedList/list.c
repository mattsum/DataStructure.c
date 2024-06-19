#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main(void)
{
    // 첫 번째 노드 생성 및 초기화
    Node *ptr = malloc(sizeof(Node));
    if (ptr == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }
    ptr->data = 1;
    ptr->next = malloc(sizeof(Node));
    if (ptr->next == NULL) {
        perror("Failed to allocate memory");
        free(ptr);
        return 1;
    }
    ptr->next->data = 3;
    ptr->next->next = malloc(sizeof(Node));
    if (ptr->next->next == NULL) {
        perror("Failed to allocate memory");
        free(ptr->next);
        free(ptr);
        return 1;
    }
    ptr->next->next->data = 4;
    ptr->next->next->next = NULL;

    // 노드 삽입 (1과 3 사이에 2를 삽입)
    {
        Node *p = malloc(sizeof(Node));
        if (p == NULL) {
            perror("Failed to allocate memory");
            // 메모리 해제
            Node *tmp = ptr;
            while (tmp != NULL) {
                Node *next = tmp->next;
                free(tmp);
                tmp = next;
            }
            return 1;
        }
        p->data = 2;
        p->next = ptr->next;
        ptr->next = p;
    }

    // 리스트 출력
    {
        Node *p = ptr;
        while (p != NULL) {
            printf("%d\n", p->data);
            p = p->next;
        }
        printf("\n");
    }

    // 메모리 해제
    {
        Node *p = ptr;
        while (p != NULL) {
            Node *tmp = p;
            p = p->next;
            free(tmp);
        }
    }

    return 0;
}
