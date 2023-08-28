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

void print_forword(Node* hd)
{
    if(hd == NULL)
        return;
    cout<<hd->val<<" ";
    print_forword(hd->next);
}

void reverse_(Node* &hd, Node* cur)
{
    if(cur->next == NULL)
    {
        hd = cur;
        return;
    }    
    reverse_(hd, cur->next);
    // cout<<hd->val<<endl; //head
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    Node* head = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

//link:
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    reverse_(head, head);

    print_forword(head);
    cout<<endl;

return 0;
}