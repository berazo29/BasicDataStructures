//
// Created by Bryan Erazo on 11/5/20.
//

#ifndef BASIC_DATA_STRUCTURES_H
#define BASIC_DATA_STRUCTURES_H

#include <stdlib.h>
#include <stdio.h>

// Unidirectional Node
struct SimpleNode {
    int data;
    struct SimpleNode *next;
};

// Node with left and right links
struct BinaryNode {
    int data;
    struct BinaryNode *left;
    struct BinaryNode *right;
};

// Linked-list operations
struct SimpleNode* insertFirst(struct SimpleNode *head, int data);
void insertFirstVoid(struct SimpleNode **head, int data);
void printLinkedList(struct SimpleNode *head);
void freeLinkedList(struct SimpleNode **head);

// Queue Operations
void enqueue(struct SimpleNode** head, int data);
void dequeue( struct SimpleNode** node);
void deleteNodeAt(struct SimpleNode** head, int position );

// Stack Operations
void push(struct SimpleNode** head, int data, int position );
void pop(struct SimpleNode** head, int position );

// Binary Search Tree Operations
struct BinaryNode* allocateBinaryNode(int data);
struct BinaryNode* insertInBst(int data, struct BinaryNode* root);
void printSortedBst(struct BinaryNode *root);
void freeBst(struct BinaryNode *root);

#endif //BASIC_DATA_STRUCTURES_H
