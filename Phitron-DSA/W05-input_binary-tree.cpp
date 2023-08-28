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

Node* inputTree() // O(N)
{
    int v; cin>>v;
    if(v == -1) return NULL; //No tree

    Node* root = new Node(v);
    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
    //step 1: (front-Node-pop)
        Node* rt = q.front();
        q.pop();

    //step 2: (connect new Nodes)
        int l,r; cin>>l>>r;

        if(l != -1)
            rt->left = new Node(l);

        if(r != -1)
            rt->right = new Node(r);

    //step 3: (push-children)
        if(rt->left)
            q.push(rt->left);
        if(rt->right)
            q.push(rt->right);
    }
    return root; //return a copy of this object (Node)
}

void levelOrder(Node* root) // O(N)
{
    //if(root != NULL) // NULL -> false
    if(!root) return; // No tree 

    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
    //step 1: (front-Node-pop)
        Node* r = q.front();
        q.pop();

    //step 2: (work with Node)
        cout<<r->val<<" ";

    //step 3: (push-children)
        if(r->left) // NULL -> false
            q.push(r->left);
        if(r->right) // NULL -> false
            q.push(r->right);
    }
}

int main()
{
    Node root = inputTree();
    // Node* root = inputTree();
    
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

    levelOrder(root);

return 0;
}