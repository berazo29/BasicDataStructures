//
// Created by Bryan Erazo on 11/5/20.
//

#include "basicDataStructures.h"
#include <assert.h>

struct BinaryNode* allocateBinaryNode(int data){
    struct BinaryNode* tmp = malloc(sizeof(struct BinaryNode));
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;

    return tmp;
}

struct BinaryNode* insertInBst(int data, struct BinaryNode* root){
    if (root == NULL){
        struct BinaryNode *tmp = allocateBinaryNode(data);
        return tmp;
    }

    struct BinaryNode *tmp = root;
    struct BinaryNode *prev = NULL;
    while (tmp != NULL){
        if (tmp->data == data){
            return root;
        }
        if (tmp->data > data){
            prev = tmp;
            tmp = tmp->left;
        } else{
            prev = tmp;
            tmp = tmp->right;
        }
    }

    struct BinaryNode *newNode = allocateBinaryNode(data);

    assert(prev != NULL);

    if (prev->data > data){
        assert(prev->left == NULL);
        prev->left = newNode;

    } else{
        assert(prev->right == NULL);
        prev->right = newNode;
    }

    return root;

}

void printSortedBst(struct BinaryNode *root){
    if (root == NULL){
        return;
    }
    printSortedBst(root->left);
    printf("%d\n", root->data);
    printSortedBst(root->right);
}

void freeBst(struct BinaryNode *root){

    if (root == NULL){
        return;
    }

    struct BinaryNode *left = root->left;
    struct BinaryNode *right = root->right;

    free(root);
    freeBst(left);
    freeBst(right);

}