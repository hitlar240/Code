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

void print_forword(Node* tmp)
{
    if(tmp == NULL) 
        return; // base case
    cout<<tmp->val<<" ";
    print_forword(tmp->next);
}

void print_reverse(Node* tmp)
{
    if(tmp == NULL) 
        return; // base case
    print_reverse(tmp->next);
    cout<<tmp->val<<" ";
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

    print_forword(head);
    cout<<endl;

    print_reverse(head);
    cout<<endl;
    
return 0;
}