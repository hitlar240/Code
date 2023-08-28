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

    int c = 0;
    Node* tmp = head;
    while(true)
    {
        int v; cin>>v;
        if(v == -1)
            break;
        // c++;
        Node* a = new Node(v);
        if(head == NULL)
            tmp = head = a;
        else 
            tmp = tmp->next = a;

    }

    c = 0;
    tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
        c++;
    }
    cout<<endl;

    cout<<c<<endl;

return 0;
}