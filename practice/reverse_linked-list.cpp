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

void reverse(Node* hd)
{
    if(hd == NULL) 
        return;

    reverse(hd->next);
    cout<<hd->val<<" ";
}

int main()
{
    Node* head = NULL;
    Node* tail = head;

    while(true)
    {
        int v; cin>>v;
        if(v == -1)
            break;
        Node* a = new Node(v);
        if(head == NULL)
            head = tail = a;
        else 
            tail = tail->next = a;
    }

    reverse(head);

return 0;
}