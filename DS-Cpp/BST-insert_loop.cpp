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

//using loop
    void insert(int val) //O(hight) | O(n ~ ln(n))
    {
        if(!root) 
        {
            root = new Node(val);
            return;
        }
        Node* rt = root;
        while(rt)
        {
            if(val < rt->val)
            {
                if(!rt->left)
                {
                    rt->left = new Node(val);
                    return; //break;
                }
                else
                    rt = rt->left;
            }
            else if(val > rt->val)
            {
                if(!rt->right)
                {
                    rt->right = new Node(val);
                    return; //break;
                }
                else
                    rt = rt->right;
            }
        }
    }

//using loop
    bool search(int s)
    {
        if(!root) return false;

        Node* rt = root;
        while(rt)
        {
            if(rt->val == s) 
                return true;
            else if(s < rt->val)
                rt = rt->left;
            else //if(s > rt->val)
                rt = rt->right;
        }
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
    t.insert(50); //root

    t.insert(25);
    t.insert(75);
    t.insert(10);
    t.insert(30);
    t.insert(70);
    t.insert(90);
    t.insert(20);

    t.in_order(t.root); cout<<endl;
    t.level_order(); cout<<endl;

    if(t.search(100)) 
    // if(t.search(10)) 
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