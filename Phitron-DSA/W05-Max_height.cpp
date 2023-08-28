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
        Node* left = NULL;
        Node* right = NULL;
    }
};


Node* inputLevel()
{
    int v; cin>>v;
    if(v == -1) return NULL;

    Node* root = new Node(v);
    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* rt = q.front();
        q.pop();


        int l,r; cin>>l>>r;
        if(l == -1) 
            rt->left = NULL;
        else 
            rt->left = new Node(l);
        if(r == -1) 
            rt->right = NULL;
        else 
            rt->right = new Node(r);


        if(rt->left) q.push(rt->left);
        if(rt->right) q.push(rt->right);
    }
    return root;
}

int max_height(Node* root) //O(N)
{
    if(root==NULL) return 0;

    return max(max_height(root->left), max_height(root->right))+1;
}

void levelOrder(Node* root)
{
    if(root == NULL) return;

    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* rt = q.front();
        q.pop();

        cout<<rt->val<<" ";

        if(rt->left) q.push(rt->left);
        if(rt->right) q.push(rt->right);
    }
    cout<<endl;
}

int main()
{
    Node* root = inputLevel();
    cout<<max_height(root)<<endl;

return 0;
}