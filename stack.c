#include "basicDataStructures.h"

void push(struct Node** head, int data, int position ){
    struct Node* newNode;
    struct Node* p;
    newNode = (struct Node*)malloc(sizeof(struct Node));

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

void pop(struct Node** head, int position ){
    struct Node* p;

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

