#include<bits/stdc++.h>
using namespace std;

struct binary
{
    binary *left,*right;
    int data;
    binary(int data): data{data},left{nullptr},right{nullptr} {}

};

void print_bfs(binary *root)
{
    if(root==nullptr)
    return;

    cout<<root->data<<" ";
    
    print_bfs(root->left);
    print_bfs(root->right);
}

int main()
{

    //nodes construction

   
   binary *root=new binary(1);
   binary *left=new binary(2);
   binary *right=new binary(3);
   binary *left_left=new binary(4);
   binary *left_right=new binary(5);

   //connecting nodes
   root->left=left;
   root->right=right;
   left->left=left_left;
   left->right=left_right;

   //printing tree
   
   print_bfs(root);

   //deleting nodes

//    delete root;
//    delete left;
//    delete right;
//    delete left_left;
//    delete left_right;
//    delete(root);
}