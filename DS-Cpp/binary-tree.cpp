// Binary Tree

#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* left = NULL;
    Node* right = NULL;

    Node(int val)
    {
        this->val = val;
    }
};


void pre_order(Node* root) // root-left-right
{
    if(root == NULL) return; //base case

    cout<<root->val<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node* root) // left-root-right
{
    if(root == NULL) return; //base case

    in_order(root->left);
    cout<<root->val<<" ";
    in_order(root->right);
}

void post_order(Node* root) // left-right-root
{
    if(root == NULL) return; //base case

    post_order(root->left);
    post_order(root->right);
    cout<<root->val<<" ";
}


int main()
{
//level 0
    Node* root = new Node(1);

//level 1
    root->left = new Node(2);
    root->right = new Node(3);

//level 2
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

//level 3
    root->left->left->right = new Node(8);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(10);
    root->right->right->left = new Node(11);
    root->right->right->right = new Node(12);

//level 4
    root->left->right->left->left = new Node(13);
    root->left->right->right->left = new Node(14);
    root->right->right->left->right = new Node(15);

/*-----------------Tree---------------------

                    1 -----------------root
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
        13       14             15 ----leaf

--------------------------------------------
*/

//traversal
    // pre_order(root); cout<<endl;
    // in_order(root); cout<<endl;
    post_order(root); cout<<endl;

return 0;
}