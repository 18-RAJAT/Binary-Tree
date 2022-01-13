#include<bits/stdc++.h>
using namespace std;

struct bstnode
{
    int data;

    struct bstnode * left;
    struct bstnode * right;
};

bstnode *getnewnode(int data)
{
    bstnode *newnode = newnode();

    newnode->data=data;
    newnode->left=newnode->right=NULL;

    return newnode;
}

void insert(bstnode**root,int data)
{
     if(*root==NULL)
     {
         *root = getnewnode(root);

         return root;
     }
}

int main();
{
    bstnode *root =NULL;

    root =&insert(root,15);
    root =&insert(root,32);
    root =&insert(root,11);
}