#include<bits/stdc++.h>
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

class stack_
{
    Node* hd = NULL;
    Node* tl = hd;

public:
    int sz = 0;

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0; 
    }

    void push(int v)
    {
        sz++;
        Node* a = new Node(v);
        if(hd==NULL)
        {
            hd = tl = a;
            return;
        }
        a->next = hd;
        hd = a;
    }

    void pop()
    {
        if(!empty())
        {
            Node* dlt = hd;
            hd = hd->next;
            delete dlt;
            sz--;
        }
        else
            cout<<"Empty!"<<endl;
    }

    int top()
    {
        if(!empty())
            return hd->val;
        else
            return -1;  //empty
    }
};

int main()
{
    stack_ st;
    
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;


    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

return 0;
}