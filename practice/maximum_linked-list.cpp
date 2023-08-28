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

int main()
{
    Node* head = NULL;
    Node* tail = head;

    insert_at_tail(head, tail);

    Node* tmp = head;
    int mx = INT_MIN;
    while(tmp != NULL)
    {
        if(tmp->val > mx)
            mx = tmp->val;
        tmp = tmp->next; 
    }

    cout<<mx<<endl;

return 0;
}