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

class stack_
{
public:
    Node* hd = NULL;
    Node* tl = hd;

    int sz = 0;

    void push(int v)
    {
        sz++;
        Node* a = new Node(v);
        if(hd == NULL)
        {
            hd = tl = a;
            return;
        }
        // tl->next = a;
        // a->prev = tl;
        // tl = a;
        a->prev = tl;
        tl = tl->next = a;
    }
    void pop()
    {
        if(sz==0) // return;
        {
            cout<<"empty!"<<endl;
            return;
        }
        Node* dlt = tl;
        tl = tl->prev;
        if(tl == NULL)
            hd = NULL;
        else
            tl->next = NULL;

        delete dlt;
        sz--;
    }
    int top()
    {
        if(empty())
        // if(tl == NULL) 
            return -1;
        else
            return tl->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        // return hd==NULL;
        return sz==0; // true or false
    }
};

bool same(stack_ a, stack_ b)
{
    if(a.size() != b.size())
        return false;

    while(!a.empty())
    {
        if(a.top() != b.top())
            return false;
        a.pop();
        b.pop();
    }

    return true;
}

int main()
{
    stack_ st1;

    int n1; cin>>n1;
    for(int i=0; i<n1; i++)
    {
        int x; cin>>x;
        st1.push(x);
    }

    stack_ st2;
    int n2; cin>>n2;
    for(int i=0; i<n2; i++)
    {
        int x; cin>>x;
        st2.push(x);
    }

    if(same(st1, st2)) // not a copy of st1 and st2 ??
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    // while(!st1.empty())
    // {
    //     cout<<st1.top()<<endl;
    //     st1.pop();
    // }

return 0;
}