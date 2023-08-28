#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

bool search(Node* root, int x) //O(N) // O(h) ~ O(log(N))
{
    if(root == NULL) return false;

    if(root->val == x) return true;
    else if(x < root->val) 
        return search(root->left,x);
    else //if(x > root->val) 
        return search(root->right,x);
}

int main()
{
    Node* root = new Node(9);
    Node* n1 = new Node(3);
    Node* n2 = new Node(11);
    Node* n3 = new Node(1);
    Node* n4 = new Node(6);
    Node* n5 = new Node(10);
    Node* n6 = new Node(14);
    Node* n7 = new Node(2);
    Node* n8 = new Node(5);
    Node* n9 = new Node(8);
    Node* n10 = new Node(12);
    Node* n11 = new Node(15);
    Node* n12 = new Node(4);
    Node* n13 = new Node(7);
    Node* n14 = new Node(13);
    
/*
                    9
                 /     \
              /           \
            3               11
         /   \             /  \
      /       \          /      \
    1          6        10       14
     \        /  \              /  \
      \      /    \            /     \
       2    5      8         12       15
           /       /           \
          /       /             \
         4       7              13
*/


//link:
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    n3->right = n7;
    n4->left = n8;
    n4->right = n9;
    n6->left = n10;
    n6->right = n11;
    n8->left = n12;
    n9->left = n13;
    n10->right = n14;

//Search x in BST
    if(search(root,12))
        cout<<"found"<<endl;
    else
        cout<<"Not found!"<<endl;

return 0;
}