#include <stdio.h>
#include "basicDataStructures.h"

int main(){
    int x = printf("this  2");
    printf("\n");
    printf("x:=%d",x);


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

}