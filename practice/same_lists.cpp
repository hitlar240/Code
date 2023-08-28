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
    tl->next = a;
    a->prev = tl;
    tl = a;
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
bool same(Node* hd1, Node* hd2)
{
    while(hd1 != NULL) //when same sizes
    {
        if(hd1->val != hd2->val)
            return false;
        hd1 = hd1->next;
        hd2 = hd2->next;
    }
    return true;
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = head1;
    
    Node* head2 = NULL;
    Node* tail2 = head2;

    while(true)
    {
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head1, tail1, v);
    }
    while(true)
    {
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head2, tail2, v);
    }

    if(size(head1) != size(head2))
        cout<<"NO"<<endl;
    else 
    {
        if(same(head1,head2) == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

// //copy
//     Node* tmp = head1;
//     while(tmp != NULL)
//     {
//         insert_at_tail(head2, tail2, tmp->val);
//         tmp = tmp->next;
//     }


return 0;
}