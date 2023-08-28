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

// int countNodes(Node* root) //level order traversal O(N)
// {
//     //if(root != NULL) // NULL -> false
//     if(!root) return 0; // No tree 

//     queue <Node*> q;
//     q.push(root);
//     int c = 0;

//     while(!q.empty())
//     {
//     //step 1: (front-Node-pop)
//         Node* r = q.front();
//         q.pop();

//     //step 2: (count Nodes)
//         cout<<r->val<<" ";
//         c++;

//     //step 3: (push-children)
//         if(r->left) // NULL -> false
//             q.push(r->left);
//         if(r->right) // NULL -> false
//             q.push(r->right);
//     }
//     cout<<endl;
//     return c;
// }

int countNodes(Node* root) //recurssion O(N)
{
    if(root == NULL) return 0;
    // int l = countNodes(root->left);
    // int r = countNodes(root->right);
    // return l+r+1;
    return countNodes(root->left)+countNodes(root->right)+1;
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

    cout<<countNodes(root)<<endl;

return 0;
}