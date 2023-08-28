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

int main()
{
    Node* head = NULL;
    // Node* head = new Node(1);
    // cout<<head<<endl;

    Node* tmp = head;
    // cout<<tmp<<endl;
    while(true)
    {
        int v; cin>>v;
        if(v == -1) break;

        Node* a = new Node(v);
        // cout<<a<<endl;
        // cout<<head<<endl;
        if(head == NULL)
        {
            tmp = head = a;
            // cout<<head<<endl;
            // cout<<tmp<<endl;
        }
        else 
            tmp = tmp->next = a;

        // tmp = tmp->next;
    }

    Node* tm = head;
    while(tm != NULL)
    {
        cout<<tm->val<<" ";
        tm = tm->next;
    }
    cout<<endl;

return 0;
}