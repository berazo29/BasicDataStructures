#include <stdio.h>
#include "basicDataStructures.h"

int main(){
    int x = printf("this  2");
    printf("\n");
    printf("x:=%d",x);


    struct SimpleNode *ptr0 = NULL;
    struct SimpleNode *ptr1 = NULL;

    for (int i = 0; i < 10; ++i) {
        ptr0 = insertFirst(ptr0, i);
    }
    for (int i = 0; i < 10; ++i) {
        insertFirstVoid(&ptr1, i);
    }


    freeLinkedList(&ptr0);
    freeLinkedList(&ptr1);

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
    freeLinkedList(&ptr0);
    freeLinkedList(&ptr1);
    printLinkedList(ptr0);
    printLinkedList(ptr1);

    struct BinaryNode *tree = NULL;
    tree = insertInBst(5, tree);
    tree = insertInBst(1, tree);
    tree = insertInBst(2, tree);

    printSortedBst(tree);
    freeBst(tree);


}