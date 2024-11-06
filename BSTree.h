#ifndef BSTREE_H
#define BSTREE_H

struct BSTNode {
  int data;
  struct BSTNode* leftChild;
  struct BSTNode* rightChild;
  struct BSTNode* parent;
};

struct BSTNode* GetNewNode(int);
struct BSTNode* TreeInsert_Recursive(struct BSTNode*,int);
struct BSTNode* TreeDelete_Recursive(struct BSTNode*,int);
void InOrderBSTreeWalk(struct BSTNode*);
#endif
