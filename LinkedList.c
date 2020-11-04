#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insertFirst(struct Node *head, int data);
void insertFirstVoid(struct Node **head, int data);
void printLinkedList(struct Node *head);
void destroyLinkedList(struct Node **head);


int main() {

    struct Node *ptr0 = NULL;
    struct Node *ptr1 = NULL;

    for (int i = 0; i < 10; ++i) {
        ptr0 = insertFirst(ptr0, i);
    }
    for (int i = 0; i < 10; ++i) {
        insertFirstVoid(&ptr1, i);
    }


    destroyLinkedList(&ptr0);
    destroyLinkedList(&ptr1);

    printLinkedList(ptr0);
    printLinkedList(ptr1);


    for (int i = 0; i < 10; ++i) {
        ptr0 = insertFirst(ptr0, i);
    }
    for (int i = 0; i < 10; ++i) {
        insertFirstVoid(&ptr1, i);
    }
    printLinkedList(ptr0);
    printLinkedList(ptr1);
    destroyLinkedList(&ptr0);
    destroyLinkedList(&ptr1);
    printLinkedList(ptr0);
    printLinkedList(ptr1);

    return 0;
}

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
