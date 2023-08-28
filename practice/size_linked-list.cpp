#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
        
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

void insert_at_tail(Node* &hd, Node* &tl)
{
    while(true)
    {
        int v; cin>>v;
        if(v == -1) return;

        Node* a = new Node(v);
        if(hd == NULL)
            hd = tl = a;
        else 
            tl = tl->next = a;
    }
}

int size(Node* hd)
{
    int c = 0;
    while(hd != NULL)
    {
        c++;
        hd = hd->next;
    }
    return c;
}

int main()
{
    Node* head1 = NULL;
    // Node* tail1 = head1;
    Node* tail1 = NULL;

    insert_at_tail(head1, tail1);

    // Node* tmp = head1;
    // while(tmp != NULL)
    // {
    //     cout<<tmp->val<<" ";
    //     tmp = tmp->next;
    // }
    
    Node* head2 = NULL;
    Node* tail2 = head1;

    insert_at_tail(head2, tail2);

    cout<<size(head1)<<endl;
    cout<<size(head2)<<endl;

    if(size(head1) == size(head2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


return 0;
}