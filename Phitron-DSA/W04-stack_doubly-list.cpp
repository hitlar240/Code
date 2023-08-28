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
    
    void push(int v) //O(1)
    {
        sz++;
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

    int size() //O(1)
    {
        return sz;
    }

    bool empty() //O(1)
    {
        // return  hd==NULL;
        return  sz==0;
    }

    void pop() //O(1)
    {
        if(!empty()) //if(sz != 0) //if(hd != NULL)
        {
            Node* dlt = tl;
            tl = tl->prev;

            if(tl == NULL) 
                hd = NULL;
            else 
                tl->next = NULL;

            delete dlt;
            sz--;
        }
        else
            cout<<"Empty!"<<endl;
    }
    
    int top() //O(1)
    {
        if(!empty()) 
            return tl->val;
        else
            return -1; //empty
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