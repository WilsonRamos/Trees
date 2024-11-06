#include "BSTree.h"
#include <stdio.h>
#include <stdlib.h>



int main(){
  struct BSTNode* root=NULL;

  root=TreeInsert_Recursive(root,8); 
  root=TreeInsert_Recursive(root,2);
  root=TreeInsert_Recursive(root,4);
  root=TreeInsert_Recursive(root,5);
 
  InOrderBSTreeWalk(root);

}

