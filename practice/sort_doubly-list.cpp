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

void reverse(Node* hd, Node* tl)
{
    Node* i = hd;
    Node* j = tl;
    while(i!=j && i->next!=j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

// bool palindrome(Node* hd, Node* tl)
// {
//     Node* i = hd;
//     Node* j = tl;
//     while(i!=j && i->next!=j)
//     {
//         if(i->val != j->val)
//             return false;

//         i = i->next;
//         j = j->prev;
//     }
//     if(i->val != j->val)
//             return false;

//     return true;
// }

bool palindrome(Node* hd1, Node* hd2)
{
    while(hd1 != NULL)
    {
        if(hd1->val != hd2->val)
            return false;

        hd1 = hd1->next;
        hd2 = hd2->next;
    }
    return true;
}

void sort_list(Node* hd) //bubble sort
{
    for(Node* i=hd; i->next!=NULL; i=i->next)
    {
        for(Node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->val > j->val)
                swap(i->val, j->val);
        }
    }
}

void print_forword(Node* hd)
{
    if(hd == NULL)
        return;
    
    cout<<hd->val<<" ";
    print_forword(hd->next);
}

void print_reverse(Node* hd)
{
    if(hd == NULL)
        return;
    
    print_reverse(hd->next);
    cout<<hd->val<<" ";
}

int main()
{
    Node* head = NULL;
    Node* tail = head;

    while(true)
    {
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head, tail, v);
    }

//sort:
    sort_list(head);
    
    print_forword(head);
    cout<<endl;
    print_reverse(head);
    cout<<endl;


return 0;
}