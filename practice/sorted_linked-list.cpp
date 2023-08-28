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

    bool f = true;
    tmp = head;
    while(tmp->next != NULL)
    {
        if(tmp->val > tmp->next->val)
        {
            f = false;
            break;
        }
        // cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

    if(f == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

return 0;
}