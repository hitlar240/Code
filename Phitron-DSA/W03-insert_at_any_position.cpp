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

void insert_at(Node* hd, Node* tl, int idx, int v)
{
    Node* tmp = hd;
    Node* a = new Node(v);
    for(int i=0; i<idx-1; i++)
    {
        tmp = tmp->next;
    }
    a->next = tmp->next;
    tmp->next = a;
    a->next->prev = a;
    a->prev = tmp;
}

void insert_at_head(Node* &hd, int v)
{
    Node* a = new Node(v);
    a->next = hd;
    hd->prev = a;
    hd = a;
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
    // Node* head = NULL;
    // Node* tail = head;

    Node* head = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* tail = c;

//link:
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;
    
    b->next = c;
    c->prev = b;


    // while(true)
    // {
        int index,val; cin>>index>>val;

        if(index > size(head)) //O(N)
        {
            cout<<"invalid"<<endl;
        }
        else if(index == 0)
        {
            insert_at_head(head, val); //O(1)
        }
        else if(index == size(head))
        {
            insert_at_tail(head, tail, val); //O(1)
        }
        else
            insert_at(head, tail, index, val); //O(N)
         
    // }


    print_forword(head);
    print_reverse(tail);


return 0;
}