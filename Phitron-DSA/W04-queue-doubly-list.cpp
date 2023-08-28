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

class queue_
{
    public:
    Node* hd = NULL, * tl = NULL;
    // Node* hd = NULL; // front
    // Node* tl = hd;   // end

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
        a->prev = tl;
        tl = tl->next = a; // tl = a;
    }

    void pop()
    {
        if(hd == NULL) // if(sz == 0) //
        {    
            cout<<"empty"<<endl;
            tl = NULL;
            return;
        }
        Node* dlt = hd;
        hd = hd->next;
        if(hd == NULL) // new head
            tl = NULL;
        else
            hd->prev = NULL;

        delete dlt;
        sz--;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        // return hd==NULL;
        return sz==0;
    }

    int front()
    {
        if(hd != NULL) // if(!empty())
            return hd->val;
        else
            return -1; //empty
    }
};

int main()
{
    queue_ q;

    // q.push(1);
    // q.push(2);
    // q.push(3);

    // q.pop(); // 1
    // q.pop(); // 2
    // q.pop(); // 3
    // q.pop(); // empty
    // // q.pop(); // empty

    // // q.push(4);
    // // q.push(5);
    // // q.push(6);

    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;

    // if(q.empty())
    //     cout<<"empty!"<<endl;
    // else
    //     cout<<"Not empty"<<endl;



    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        q.push(x);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


return 0;
}