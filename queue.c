#include "basicDataStructures.h"

void enqueue(struct Node** head, int data){
    struct Node* newNode;
    struct Node* p;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    p = *head;
    newNode->next = p;
    *head = newNode;


}

void deleteNodeAt(struct Node** head, int position ){
    int k = 1;
    struct Node* p;
    struct Node* q;

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

void dequeue( struct Node** node){

    struct Node* p = *node;
    int i = 0;
    while ( p != NULL ){
        i++;
        p = p->next;
    }
    deleteNodeAt(node,i);
}
