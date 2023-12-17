#include<iostream>
using namespace std;
struct Node
{
int key;
struct Node*left,*right;
};
Node*newNode(int data)
{
 Node *temp=new Node();
 temp->key=data;
 temp->left=NULL;
 temp->right=NULL;
 return temp;
}
Node*insert(Node*root,int key)
{
Node*newnode=newNode(key);
 Node*x=root;
 Node*y=NULL;
 while(x!=NULL)
 {
 y=x;
 if (key<x->key)
 x=x->left;
 else
 x=x->right;
 }
 if(y==NULL)
 y=newnode;
 else
 if(key<y->key)
 y->left=newnode;
 else
 y->right=newnode;
 return y;
}
void inorder(Node*root)
{
 if(root==NULL)
 return;
 else
 inorder(root->left);
 cout<<root->key<<" ";
 inorder(root->right);
}
int main()
{
 Node*root=NULL;
 root=insert(root,50);
 insert(root,30);
 insert(root,20);
 insert(root,40);
 insert(root,70);
 insert(root,60);
 insert(root,80);
 inorder(root);
 return 0;
}