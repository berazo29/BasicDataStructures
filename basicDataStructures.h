//
// Created by Bryan Erazo on 11/5/20.
//

#ifndef BASIC_DATA_STRUCTURES_H
#define BASIC_DATA_STRUCTURES_H

#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

// Linked-list operations
struct Node* insertFirst(struct Node *head, int data);
void insertFirstVoid(struct Node **head, int data);
void printLinkedList(struct Node *head);
void destroyLinkedList(struct Node **head);

// Queue Operations
void enqueue(struct Node** head, int data);
void dequeue( struct Node** node);
void deleteNodeAt(struct Node** head, int position );

// Stack Operations
void push(struct Node** head, int data, int position );
void pop(struct Node** head, int position );

#endif //BASIC_DATA_STRUCTURES_H
