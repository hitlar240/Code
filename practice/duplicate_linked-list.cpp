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
    
    bool f = false;
    tmp = head;
    while(tmp != NULL)
    {
        Node* tm = head;
        int c = 0;
        while(tm != NULL)
        {
            if(tmp->val == tm->val)
                c++;
            // cout<<tmp->val<<" "<<tm->val<<" "<<c<<endl;
            if(c > 1)
            {
                f = true; break;
            }
            tm = tm->next;
        }
        cout<<endl;
        if(f == true) break;
        tmp = tmp->next;
    }

    if(f == true)
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;

return 0;
}