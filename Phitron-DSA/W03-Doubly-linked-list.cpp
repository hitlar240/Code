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

//print:
    Node* tmp = head;
    while(tmp != NULL) // breaks at tmp = NULL
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next; // tmp = NULL
    }
    cout<<endl; 
    
    tmp = tail;
    while(tmp != NULL) // breaks at tmp = NULL
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev; // tmp = NULL
    }
    cout<<endl;




    print_forword(head); //O(N)

    print_reverse(tail); //O(N)


return 0;
}