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

void print(Node* tmp)
{ 
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    // Node* tmp = NULL;
    Node* tmp = head;

    while(true)
    {
        int v; cin>>v;
        if(v == -1) break;

        Node* a = new Node(v);
        if(head == NULL)
            tmp = head = a;
        else 
            tmp = tmp->next = a;
    }

    print(head);
    cout<<endl;
    

//selection sort: O(sum(N-1)) = O((N-1)N/2) = O(N^2) | N ~ 10^3

//while loop:
    // Node* i = head; 
    // while(i->next != NULL) // i<n-1
    // {
    //     Node* j = i->next; // j=i+1
    //     while(j != NULL) 
    //     {
    //         // cout<<i->val<<" "<<j->val<<endl;
    //         if(i->val > j->val)
    //         {
    //             swap(i->val, j->val); 
    //             // int t = i->val;
    //             // i->val = j->val;
    //             // j->val = t;
    //         }
    //         j = j->next;
    //     }
    //     i = i->next;
    // }


// for loop:
    for(Node* i=head; i->next!=NULL; i=i->next)
    {
        for(Node* j=i->next; j!=NULL; j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val > j->val)
            {
                swap(i->val, j->val); //dereference ??
                // int t = i->val;
                // i->val = j->val;
                // j->val = t;
            }
        }
    }

    print(head);
    cout<<endl;


return 0;
}