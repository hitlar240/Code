#include<iostream>
#include<queue> //queue
#include<algorithm> //sort
using namespace std;

struct Node
{
    int val;
    Node* left = NULL;
    Node* right = NULL;

    Node(int val)
    {
        this->val = val;
    }
};

class BST
{
public: 
    Node* root = NULL;

    Node* create_BST(int a[], int l, int r)
    {
        if(l>r) return NULL;

        int mid = (l+r)/2;
        Node* root = new Node(a[mid]); //scope of this root is inside create_BST()
        root->left = create_BST(a,l,mid-1);
        root->right = create_BST(a,mid+1,r);

        return root;
    }

    void in_order(Node* root)
    {
        if(!root) return;

        in_order(root->left);
        cout<<root->val<<" ";
        in_order(root->right);
    }

    void level_Order()
    {
        if(!root) return;

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
    }

};

int main()
{
    int n; cout<<"size of array = ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);

    sort(arr,arr+n); //sort array | o(nlog(n))

    BST t;
    t.root = t.create_BST(arr,0,n-1);

    t.in_order(t.root); cout<<endl;
    t.level_Order(); cout<<endl;


/*  left-value < root-value < right-value

size = 15
input: 6 2 11 8 4 7 9 10 12 5 14 1 15 3 13
output:

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