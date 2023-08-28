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

void insert_at_tail(Node* &hd, Node* &tl, int v)
{
    Node* a = new Node(v);
    if(hd == NULL)
        tl = hd = a;
    else 
        tl = tl->next = a;
}

int main()
{
    Node* head = NULL;
    // Node* tail = NULL;
    Node* tail = head;

    while(true)
    {
        int val; cin>>val;
        if(val == -1) break;

        insert_at_tail(head, tail, val);
    }

    Node* tmp = head;
    while(tmp != NULL) // before tmp = NULL
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;


return 0;
}