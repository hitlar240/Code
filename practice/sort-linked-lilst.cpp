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
        if(v == -1) 
            return;
        Node* a = new Node(v);
        if(hd == NULL)
            hd = tl = a;
        else 
            tl = tl->next = a;
    }
}

void sort_list(Node* hd)
{
    while(hd->next != NULL) // for(Node* i=hd; i->next!=NULL; i->next)
    {
        Node* h = hd->next;
        while(h != NULL) // for(Node* j=hd-next; j!=NULL; j->next)
        {
            if(hd->val < h->val) // if(i->val < j->val)
                swap(hd->val, h->val); // swap(i->val, j->val);

            h = h->next;
        }
        hd = hd->next;
    }
}

void print(Node* hd)
{
    while(hd != NULL)
    {
        cout<<hd->val<<" ";
        hd = hd->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = head;

    insert_at_tail(head, tail);

    sort_list(head);

    print(head);


return 0;
}