//
// Created by Bryan Erazo on 11/5/20.
//

#include "basicDataStructures.h"

struct SimpleNode* insertFirst(struct SimpleNode *head, int data){
    struct SimpleNode *tmp = (struct SimpleNode*)malloc(sizeof(struct SimpleNode));
    tmp->data = data;
    tmp->next = head;
    return tmp;
}

void insertFirstVoid(struct SimpleNode **head, int data){

    struct SimpleNode *newNode = (struct SimpleNode*)malloc(sizeof(struct SimpleNode));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printLinkedList(struct SimpleNode *head){
    if (head == NULL){
        printf(" Empty\n");
        return;
    }
    while (head != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf(" END\n");
}

void freeLinkedList(struct SimpleNode **head){
    struct SimpleNode  *next;
    struct SimpleNode *curr;
    for (curr = *head; curr; curr = next){
        next = curr->next;
        free(curr);
    }
    *head = NULL;
}
