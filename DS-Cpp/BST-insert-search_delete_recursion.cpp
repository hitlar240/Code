#include<iostream>
#include<queue>
using namespace std;

struct Node //in c++ struct is almost the same as class
{
    int val;
    Node* left;
    Node* right;
//constructor
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
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
            return new Node(val); //insert root

        if(val < root->val)
        {
            cout<<val<<"<"<<root->val<<endl;
            if(!root->left)
                root->left = new Node(val);
            else
                root->left = insert(root->left,val);
        }
        else if(val > root->val)//no duplication in BST
        {
            cout<<val<<">"<<root->val<<endl;
            if(!root->right)
                root->right = new Node(val);
            else
                root->right = insert(root->right,val);
        }
        return root;
    }

    bool search(Node* root, int s)
    {
        if(!root) return false;
        if(root->val == s) return true;

        if(s < root->val)
            return search(root->left, s);
        else //if(s > root->val)
            return search(root->right, s);
    }

    Node* in_Order_Successor(Node* root)
    {
        Node* tmp = root;
        while(tmp && tmp->left)
        {
            tmp = tmp->left;
        }
        return tmp;
    }

    Node* delete_node(Node* root, int val)
    {
        if(!search(root,val)) return root;

        if(val < root->val)
            root->left = delete_node(root->left,val);
        else if(val > root->val)
            root->right = delete_node(root->right,val);
        else
        {
        // case 1: leaf node
        // case 2: node with one sub-tree
            if(!root->left)
            {
                Node* tmp = root->right;
                delete root;
                return tmp;
            }
            if(!root->right)
            {
                Node* tmp = root->left;
                delete root;
                return tmp;
            }
        // else // case 3: node with tow sub-tree
            Node* succ = in_Order_Successor(root->right);
            root->val = succ->val;
            root->right = delete_node(root->right,succ->val);
        }
        return root;
    }

//traversal
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
    t.root = t.insert(NULL,50); //initally
    t.root = t.insert(t.root,20);
    t.root = t.insert(t.root,70);
    t.root = t.insert(t.root,10);
    t.root = t.insert(t.root,30);
    t.root = t.insert(t.root,90);
    t.root = t.insert(t.root,65);
    t.root = t.insert(t.root,25);


    t.in_order(t.root); cout<<endl;
    t.level_order(); cout<<endl;

    // if(t.search(t.root,100)) 
    if(t.search(t.root,10)) 
        cout<<"found\n\n";
    else 
        cout<<"Not found!\n\n";

/* -------------------------------

                50 <---- root
               /  \
              /    \
            20      70
            /\      /\
           /  \    /  \
         10   30  65  90
              /
             /
            25 <---- leaf

----------------------------------
 */

    // t.root = t.delete_node(t.root,65); //case 1
    // t.root = t.delete_node(t.root,30); //case 2
    t.root = t.delete_node(t.root,20); //case 3

    t.in_order(t.root); cout<<endl;
    t.level_order(); cout<<endl;


return 0;
}