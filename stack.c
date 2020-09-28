#include <stdio.h>
#include "stdlib.h"

struct Node{
    int data;
    struct Node* next;
};

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

void printlist( struct Node* head ){
    if ( head == NULL ){
        printf("EMPTY");
    }
    while (head != NULL){
        printf("%d -- ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    printf("Hello, World!\n");
    struct Node* head = NULL;

    push(&head,1,1);
    push(&head, 2,1);
    printlist(head);
    pop(&head,1);
    pop(&head,1);
    push(&head, 100,1);
    push(&head, 90,1);
    printlist(head);
    return 0;
}

