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

void pre_Order(Node* root)
{
    if(root == NULL) //Base case
        return;

    cout<<root->val<<" ";
    pre_Order(root->left);
    pre_Order(root->right);
}

int main()
{
    Node* root = new Node(1);
    Node* n1 = new Node(2);
    Node* n2 = new Node(3);
    Node* n3 = new Node(4);
    Node* n4 = new Node(5);
    Node* n5 = new Node(6);
    Node* n6 = new Node(7);
    Node* n7 = new Node(8);
    Node* n8 = new Node(9);
    Node* n9 = new Node(10);
    Node* n10 = new Node(11);
    Node* n11 = new Node(12);
    Node* n12 = new Node(13);
    Node* n13 = new Node(14);
    Node* n14 = new Node(15);
    
/*
                    1
                 /     \
              /           \
            2               3
         /   \             /  \
      /       \          /      \
    4          5        6        7
     \        /  \              / \
      \      /    \            /   \
       8    9      10        11     12
           /       /          \
          /       /            \
        13       14             15
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

// root > left > right
    pre_Order(root);
    // 1 2 4 8 5 9 13 10 14 3 6 7 11 15 12 

return 0;
}