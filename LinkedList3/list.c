#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

static Node *createNode(int data, Node *next) 
{
    Node *p = malloc(sizeof(Node));
    assert(p );
    p->data = data;
    p->next = next;

    return p;
}

void initList(List *plist) 
{    
    // plist->ptr = malloc(sizeof(Node));
    // assert(plist ->ptr);
    // //plist->ptr->data = ???;       //dummy
    
    // plist->ptr->next = NULL;

    plist->ptr = createNode(-1, NULL);
}

void cleanupList(List *plist) {
    Node *p = plist->ptr;
    while(p ){
        Node *tmp =p;
        p = p->next;
        free(tmp);
    }
}

void insertFirstNode(List *plist, int data) 
{    
    // Node *p = malloc(sizeof(Node));
    // assert(p );
    // p->data = data;
    // p->next = plist->ptr->next;
    // plist->ptr->next = p;

    plist->ptr->next = createNode(data, plist->ptr->next);
}

void insertNode(List *plist, int prevData, int data) 
{
    Node *p = plist->ptr->next;
    while(p ) {
        if (p->data == prevData) {
            break;
        }
        p = p->next;
    }
    if (p ) {
        // Node *p2 = malloc(sizeof(Node));
        // assert(p2 );
        // p2->data = data;
        // p2->next = p->next;
        // p->next = p2;
        p->next = createNode(data, p->next);    
    }
}

void deleteNode(List *plist, int data)
{
    Node *p = plist->ptr->next;
    Node *p2 = plist->ptr;
    while(p ) {
        if (p->data == data) {
            break;
        }
        p = p->next;
        p2 = p2->next;
    }
    if (p ) {
        p2->next = p->next;
        free(p);
    }
}

void printList(const List *plist) {
    Node *p = plist->ptr->next;
    printf("[");
    while (p ) {
        printf("%d", p->data);
        printf((p->next)?", ":"");
        p = p->next;
    }
    printf("]\n");
}
