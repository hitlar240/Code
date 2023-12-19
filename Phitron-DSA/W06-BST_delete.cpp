// Binary Search Tree

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

void in_order(Node* root) // left-root-right
{
    if(root == NULL) return; //base case

    in_order(root->left);
    cout<<root->val<<" ";
    in_order(root->right);
}

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

bool search(Node* root, int s)
{
    if(!root) return false;
    if(root->val == s) return true;

    if(s < root->val)
        return search(root->left, s);
    else //if(s > root->val)
        return search(root->right, s);
}

Node* successor(Node* root)
{
    Node* tmp = root;
    while(tmp->left)
    {
        tmp = tmp->left;
    }
    return tmp;
}

Node* delete_node(Node* root, int val)
{
    if(!search(root, val))
        return root;

    Node* rt = root;
    Node* tmp = NULL;
    while(rt && rt->val != val)
    {
        tmp = rt;
        if(val < rt->val)
            rt = rt->left;
        else if(val > rt->val)
            rt = rt->right;
    }

    if(val < tmp->val)
    {
        Node* l = tmp->left;
        if(!l->left)
            tmp->left = l->right;
        else if(!l->right)
            tmp->left = l->left;
        else
        {
            Node* s = successor(l->right);
            l->val = s->val;
            delete_node(l->right,s->val);
            return root;
        }
        delete l;
    }
    else
    {
        Node* r = tmp->right;
        if(!r->left)
            tmp->left = r->right;
        else if(!r->right)
            tmp->left = r->left;
        else
        {
            Node* s = successor(r->right);
            r->val = s->val;
            delete_node(r->right,s->val);
            return root;
        }
        delete r;
    }
    return root;
}


int main()
{
    Node* root = new Node(9);
    Node* n1 = new Node(3);
    Node* n2 = new Node(11);
    Node* n3 = new Node(1);
    Node* n4 = new Node(6);
    Node* n5 = new Node(10);
    Node* n6 = new Node(14);
    Node* n7 = new Node(2);
    Node* n8 = new Node(5);
    Node* n9 = new Node(8);
    Node* n10 = new Node(12);
    Node* n11 = new Node(15);
    Node* n12 = new Node(4);
    Node* n13 = new Node(7);
    Node* n14 = new Node(13);
    

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

/*  left-value < root-value < right-value

                    9
                 /     \
              /           \
            3               11
         /   \             /  \
      /       \          /      \
    1          6        10       14
     \        /  \              /  \
      \      /    \            /     \
       2    5      8         12       15
           /       /           \
          /       /             \
         4       7              13
*/

    in_order(root); cout<<endl;
    level_order(root); cout<<endl;

    root = delete_node(root,10); //case 1: leaf node
    root = delete_node(root,1); // case 2: node with one sub-tree
    root = delete_node(root,6); //case 3: node with tow sub-tree
    
    in_order(root); cout<<endl;
    level_order(root); cout<<endl;


return 0;
}