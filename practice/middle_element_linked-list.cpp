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
    Node* head = NULL;
    Node* tail = head;

    insert_at_tail(head, tail);

    int s = size(head);
    Node* tmp = head;

    if(s%2 == 0)
    {
        for(int i=0; i<s/2-1; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val<<endl;
        cout<<tmp->next->val<<endl;
    }
    else
    {
        for(int i=0; i<s/2; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val<<endl;
    }


return 0;
}