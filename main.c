#include <stdio.h>
#include <stdlib.h>

struct Node{
    int base;
    int height;
    struct Node* next;
};

void printNodes(struct Node* head){
    while ( head != NULL){
        printf("b:%d h:%d ----", head->base, head->height);
        head = head->next;
    }
    printf("NULL");
};

// Nodes counter
int counterNodes( struct Node* head){
    int counter = 0;
//    while ( head != NULL ){
//        counter++;
//        head = head->next;
//    }
    for( struct Node* ptr = head; ptr != NULL; ptr = ptr->next){
        counter++;
    }
    printf("\nNodes %d\n", counter);
    return counter;
}

// Area
int areaRect(int a, int b){
    int area = 0;
    area = a*b;
    return area;
}

// areaNodeTotal
int areaNodeTotal(struct Node* head){
    int area = 0;
    while ( head != NULL){
        area += areaRect(head->base, head->height);
        head = head->next;
    }
    return area;
}

// Test Cases
void testLinkedList(){
    struct Node* head;
    struct Node* node1;
    struct Node* node2;
    struct Node* temp;
    struct Node* prev;
    struct Node* next;

    head = (struct Node*)malloc(sizeof(struct Node));
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));

    head->base = 1;
    head->height = 2;
    head->next = node1;

    node1->base = 2;
    node1->height = 3;
    node1-> next = node2;

    node2->base = 1;
    node2->height = 5;
    node2->next = NULL;

    printNodes(head);
    counterNodes(head);

    //     Delete first node
    temp = head;
    head = head->next;
    free(temp);

    printf("\n");
    printNodes(head);
    counterNodes(head);


    printf("\narea Total: %d \n", areaNodeTotal(head));

}

int main(int argc, char* argv[argc+1]) {

    if (argc == 1){
        printf("TRUE\n");
    }
    printf("Number of inputs %d\n", argc);
    printf("Name file: %s\n", argv[0]);
    //testLinkedList();

    return 0;
}
