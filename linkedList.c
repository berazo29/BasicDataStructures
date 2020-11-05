#include "basicDataStructures.h"

struct Node* insertFirst(struct Node *head, int data){
    struct Node *tmp = (struct Node*)malloc(sizeof(struct Node));
    tmp->data = data;
    tmp->next = head;
    return tmp;
}

void insertFirstVoid(struct Node **head, int data){

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printLinkedList(struct Node *head){
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

void destroyLinkedList(struct Node **head){
    struct Node  *next;
    struct Node *curr;
    for (curr = *head; curr; curr = next){
        next = curr->next;
        free(curr);
    }
    *head = NULL;
}
