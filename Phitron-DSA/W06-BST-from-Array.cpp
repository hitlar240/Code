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

Node* construct(int a[], int l, int r)
{
    if(l>r) return NULL;

    int mid = (l+r)/2;
    Node* root = new Node(a[mid]); //scope of this root is inside construct()
    root->left = construct(a, l, mid-1);
    root->right = construct(a, mid+1, r);

    return root;
}

void in_Order(Node* root)
{
    if(root == NULL) return;

    in_Order(root->left);
    cout<<root->val<<" ";
    in_Order(root->right);

}

void level_Order(Node* root) // O(N)
{
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
}

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; cin>>a[i++]);
    sort(a,a+n); //O(Nlog(N))

    // int a[15] = {8,2,11,6,4,7,9,10,12,5,14,1,15,3,13};
    // sort(a,a+15); //sort array
    // int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; //sorted

    Node* root = construct(a,0,n-1);

    in_Order(root);
    cout<<endl;
    level_Order(root);

    
/*  left-value < root-value < right-value

                        8
                     /     \
                  /           \
                4               12
             /   \             /   \
          /       \           /       \
        2          6         10        14
       / \        / \       / \       /  \
      /   \      /   \     /   \     /    \
     1     3    5     7   9    11   13     15
 
*/

return 0;
}