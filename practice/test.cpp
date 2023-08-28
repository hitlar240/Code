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

void insert_at_head(Node* &hd, Node* &tl, int v)
{
    Node* newHead = new Node(v);
    if(hd == NULL)
        tl = newHead;

    newHead->next = hd;
    hd = newHead;
}

void insert_at_tail(Node* &hd, Node* &tl, int v)
{
        Node* newNode = new Node(v);
        if(hd == NULL)
        {
            hd = newNode;
            tl = newNode;
        }
        else
        {
            tl->next = newNode;
            tl = newNode;
        }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int t; cin>>t;

    while(t--)
    {
        int x,v; 
        cin>>x>>v;

        if(x == 0)
            insert_at_head(head, tail, v);
        else
            insert_at_tail(head, tail, v);

        cout<<head->val<<" "<<tail->val<<endl;
    }

return 0;
}








// void print_reverse(Node* hd)
// {
//     if(hd == NULL)
//         return;
    
//     print_reverse(hd->next);
//     cout<<hd->val<<" ";
// }

// void print_original(Node* hd)
// {
//     if(hd == NULL)
//         return;
    
//     cout<<hd->val<<" ";
//     print_original(hd->next);
// }


// void sort_linked_list(Node* hd)
// {
//     for(Node* i=hd; i->next!=NULL; i=i->next)
//     {
//         for(Node* j=i->next; j!=NULL; j=j->next)
//         {
//             if(i->val < j->val)
//                 swap(i->val, j->val);
//         }
//     }
// }

// int size(Node* hd)
// {
//     int s = 0;
//     while(hd != NULL)
//     {
//         s++;
//         hd = hd->next;
//     }
//     return s;
// }