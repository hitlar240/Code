#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left, * right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* input_tree()
{
    int x; cin>>x;
    if(x == -1) return NULL; //No tree 
    
    Node* root = new Node(x); //dynamic object (Node)
    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* rt = q.front();
        q.pop();

        int l,r; cin>>l>>r;
        if(l != -1)
            rt->left = new Node(l);
        if(r != -1)
            rt->right = new Node(r);

        if(rt->left) q.push(rt->left);
        if(rt->right) q.push(rt->right);
    }
    return root; //return a copy of this dynamic object (Node)
}

void insert(Node* &root, int x) //reference
{
    if(root == NULL)
    {
        root = new Node(x); 
        return;
    }

    if(x < root->val)
    {
        if(root->left == NULL) 
            root->left = new Node(x);
        else
            insert(root->left, x);
    }
    else if(x > root->val)
    {
        if(root->right == NULL) 
            root->right = new Node(x);
        else
            insert(root->right, x);
    }
}

void in_Order(Node* root)
{
    if(root == NULL) return;

    in_Order(root->left);
    cout<<root->val<<" ";
    in_Order(root->right);

}

int main()
{

/*  left-value < root-value < right-value

                    40
                 /     \
              /           \
            10              50
         /   \             /  \
      /       \          /      \
    0          25       45       75
     \        /  \              /  \
      \      /    \            /     \
       5    20     35        55       80
           /       /           \
          /       /             \
         15      30             60
                /
               /
              32 <----- insert
*/

    Node* root = input_tree();

    int x; cin>>x;
    insert(root,x);

// left -> root -> right
    in_Order(root);

return 0;
}