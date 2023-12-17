#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node* l, * r;
};

Node* createNode(int data) //as constructor
{
    Node* node = new Node;
    node->key = data;
    node->l = node->r = NULL;

    return node;
}

// //using loop
// Node* insert(Node* root, int data)
// {
//     if(!root) return createNode(data);
// //duplication is not allowed in BST
//     Node* tmp = NULL;
//     while(root) //root != NULL
//     {
//         tmp = root;
//         if(data < root->key)
//             root = root->l;
//         else if(data > root->key)
//             root = root->r;
//     }
//     if(data < tmp->key)
//         return tmp->l = createNode(data);
//     else if(data > tmp->key)
//         return tmp->r = createNode(data);
// }


//or,
//using recursion
Node* insert(Node* root, int data)
{
    if(!root) return createNode(data); //base case

    if(data < root->key)
    {
        if(!root->l)
            return root->l = createNode(data);
        else
            return insert(root->l,data);
    }
    else if(data > root->key)
    {
        if(!root->r)
            return root->r = createNode(data);
        else
            return insert(root->r,data);
    }
}

//traversal
void inOrder(Node* root)
{
    if(!root) return; //base case

    inOrder(root->l);
    cout<<root->key<<" ";
    inOrder(root->r);
}

int main()
{
    Node* root = insert(NULL,100);

    insert(root,20);
    insert(root,500);
    insert(root,10);
    insert(root,30);
    inOrder(root); cout<<endl;

    insert(root,40);
    inOrder(root); cout<<endl;

/* ----------------------------------
           100
            /\
           /  \
         20    500
         /\
        /  \
      10    30
             \
              \
              40 <---- insert
-------------------------------------
 */

return 0;
}