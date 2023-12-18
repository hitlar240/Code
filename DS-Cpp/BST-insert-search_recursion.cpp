#include<iostream>
#include<queue>
using namespace std;

struct Node //in c++ struct is almost the same as class
{
    int val;
    Node* left = NULL;
    Node* right = NULL;
//constructor
    Node(int val)
    {
        this->val = val;
    }
};

class BST 
{
public:
    Node* root = NULL; //initally

// using recursion
    Node* insert(Node* root, int val) //O(hight) | O(n ~ ln(n))
    {
        if(!root) 
        {
            return new Node(val); //insert root
        }
        if(val < root->val)
        {
            if(!root->left)
                root->left = new Node(val);
            else
                insert(root->left,val);
        }
        else //no duplication in BST
        {
            if(!root->right)
                root->right = new Node(val);
            else
                insert(root->right,val);
        }
    }

// using recursion
    bool search(Node* root, int s)
    {
        if(!root) return false;
        if(root->val == s) return true;

        if(s < root->val)
            return search(root->left, s);
        else //if(s > root->val)
            return search(root->right, s);
    }

    void in_order(Node* root)
    {
        if(!root) return; //base case

        in_order(root->left);
        cout<<root->val<<" ";
        in_order(root->right);
    }

    void level_order() //O(n)
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
    BST t;
    t.root = t.insert(NULL,50);

    t.insert(t.root,25);
    t.insert(t.root,75);
    t.insert(t.root,10);
    t.insert(t.root,30);
    t.insert(t.root,70);
    t.insert(t.root,90);
    t.insert(t.root,20);

    t.in_order(t.root); cout<<endl;
    t.level_order(); cout<<endl;

    // if(t.search(t.root,100)) 
    if(t.search(t.root,10)) 
        cout<<"found\n";
    else 
        cout<<"Not found!\n";

/* -------------------------------

                50 <---- root
               /  \
              /    \
            25      75
            /\      /\
           /  \    /  \
         10   30  70  90
              /
             /
            20 <---- leaf

----------------------------------
 */

return 0;
}