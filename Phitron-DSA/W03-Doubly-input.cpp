#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* prev;
    Node* next;
        
    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void insert_at_tail(Node* &hd, Node* &tl, int v)
{
    Node* a = new Node(v);
    if(hd == NULL)
    {
        hd = tl = a;
        return;
    }
//link:
    tl->next = a;
    a->prev = tl;
    tl = a;
}

void print_forword(Node* hd)
{
    while(hd != NULL)
    {
        cout<<hd->val<<" ";
        hd = hd->next;
    }
    cout<<endl;
}

void print_reverse(Node* tl)
{
    while(tl != NULL)
    {
        cout<<tl->val<<" ";
        tl = tl->prev;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = head;

    while(true)
    {
        int val; cin>>val;

        if(val == -1)
            break;
        
        insert_at_tail(head, tail, val); //O(1)
    }

    print_forword(head);
    print_reverse(tail);

return 0;
}