//
// Created by Bryan Erazo on 11/5/20.
//

#include "basicDataStructures.h"

void push(struct SimpleNode** head, int data, int position ){
    struct SimpleNode* newNode;
    struct SimpleNode* p;
    newNode = (struct SimpleNode*)malloc(sizeof(struct SimpleNode));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    p = *head;
    if ( position == 1 ){
        newNode->next = p;
        *head = newNode;
    }


}

void pop(struct SimpleNode** head, int position ){
    struct SimpleNode* p;

    if(head == NULL){
        printf("List Empty");
        return;
    }
    p = *head;
    if ( position == 1){
        *head = (*head)->next;
        free(p);
    }

}

