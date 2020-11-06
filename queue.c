//
// Created by Bryan Erazo on 11/5/20.
//

#include "basicDataStructures.h"

void enqueue(struct SimpleNode** head, int data){
    struct SimpleNode* newNode;
    struct SimpleNode* p;
    newNode = (struct SimpleNode*)malloc(sizeof(struct SimpleNode));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    p = *head;
    newNode->next = p;
    *head = newNode;


}

void deleteNodeAt(struct SimpleNode** head, int position ){
    int k = 1;
    struct SimpleNode* p;
    struct SimpleNode* q;

    if(head == NULL){
        printf("List Empty");
        return;
    }
    if ( position == 0){
        return;
    }
    p = *head;
    if (position == 1){
        *head = (*head)->next;
        free(p);
        return;
    }
    while ( p!= NULL && (k < position )){
        k++;
        q = p;
        p = p->next;
    }
    if (p == NULL){
        printf("Position does not exist");
    } else{
        q->next = p->next;
        free(p);
    }

}

void dequeue( struct SimpleNode** node){

    struct SimpleNode* p = *node;
    int i = 0;
    while ( p != NULL ){
        i++;
        p = p->next;
    }
    deleteNodeAt(node,i);
}
