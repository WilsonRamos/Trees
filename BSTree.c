#include "BSTree.h"
#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct BSTNode* GetNewNode(int data){
  struct BSTNode* newNode = malloc(sizeof(struct BSTNode));
  newNode->data=data;
  newNode->leftChild=NULL;
  newNode->rightChild=NULL;
  newNode->parent=NULL;

  return newNode;
}
struct BSTNode* TreeInsert_Recursive(struct BSTNode* root,int data){
  if(root==NULL){
    return GetNewNode(data);
  }
  else if (data < root->data) {
   root->leftChild =  TreeInsert_Recursive(root->leftChild,data);
  }
  else 
   root->rightChild = TreeInsert_Recursive(root->rightChild,data);

  return root;
}

void InOrderBSTreeWalk(struct BSTNode* root){
  if(root==NULL)return;

  InOrderBSTreeWalk(root->leftChild);
  printf("%d - ",root->data);
  InOrderBSTreeWalk(root->rightChild);
}

struct BSTNode* TreeDelete_Recursive(struct BSTNode* root, int data){
  if (root != NULL) {
  if(data < root->data)
    TreeDelete_Recursive(root->leftChild, data);
  }
  else if (data>root->data) {
    TreeDelete_Recursive(root->rightChild,data);
  }

  else {
    consideraria los tres casos
  }
}

