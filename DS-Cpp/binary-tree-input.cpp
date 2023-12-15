#include<iostream>
#include<queue>
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

class Tree
{
public:
    Node* input_tree() //O(n)
    {
        int val; cin>>val;
        if(val == -1) return NULL; // No tree 
        
        Node* root = new Node(val);
        queue <Node*> q;
        q.push(root);

        while(!q.empty())
        {
            Node* rt = q.front();
            q.pop();

            int l,r; cin>>l>>r;
            if(l != -1) // -1 for no node
            {
                rt->left = new Node(l);
                q.push(rt->left);
            }

            if(r != -1) // -1 for no node
            {
                rt->right = new Node(r);
                q.push(rt->right);
            }
        }

        return root;
    }

//traversal
    void level_order(Node* root) //O(n)
    {
        if(!root) return; // No tree 

        queue <Node*> q;
        q.push(root);

        while(!q.empty())
        {
            Node* rt = q.front();
            cout<<rt->val<<" ";
            q.pop();

            if(rt->left)
                q.push(rt->left);
            
            if(rt->right)
                q.push(rt->right);
        }
        cout<<endl;
    }

};



int main()
{
    Tree t;
    
    t.level_order(t.input_tree());

/* 

Ex:
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


input: 1 2 3 4 5 6 7 -1 8 9 10 -1 -1 11 12 -1 -1 13 -1 14 -1 15 -1 -1 -1 -1 -1 -1 -1 -1 -1
output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

 */


return 0;
}