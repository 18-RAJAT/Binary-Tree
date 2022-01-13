

#include<bits/stdc++.h>
using namespace std;

struct treenode
{
    int val;

    treenode *right;
    treenode *left;
};

bool issametree(treenode *root1,treenode *root2)
{
  if(root1==NULL && root2==NULL)
  {
      return true;
  }

  if(root1==NULL || root2==NULL)
  {
      return false;
  }

  return root1->val ==root2->val && issametree(root1->left,root2->left) && issametree(root1->right,root2->right)
}