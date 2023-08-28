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

void delete_head(Node* &hd, Node* &tl)
{
    if(hd == NULL)
    {
        tl = NULL;
        return;
    }

    Node* dlt = hd;
    hd->next->prev = NULL;
    hd = hd->next;
    delete dlt;
}

void delete_at(Node* hd, Node* tl, int idx)
{
    Node* tmp = hd;
    for(int i=0; i<idx-1; i++)
    {
        tmp = tmp->next;
    }
    Node* dlt = tmp->next;

    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete dlt;
}

void delete_tail(Node* &hd, Node* &tl)
{
    if(tl == NULL)
    {
        hd = NULL;
        return;
    }

    Node* dlt = tl;
    tl->prev->next = NULL;
    tl = tl->prev;
    delete dlt;
    // Node* dlt = tl;
    // tl = tl->prev;
    // tl->next = NULL;
    // delete dlt;
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

    int index; cin>>index;
    if(index >= size(head))
    {
        cout<<"invalid"<<endl;
    }
    else if(index == 0)
    {
        delete_head(head,tail); //O(1)
    }
    else if(index == size(head)-1)
    {
        delete_tail(head,tail); //O(1)
    }
    else
        delete_at(head, tail, index); //O(N)


    print_forword(head);
    print_reverse(tail);

return 0;
}