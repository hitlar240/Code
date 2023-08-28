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

class queue_
{
    public:
    Node* hd = NULL; // front
    Node* tl = hd;   // end

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
        tl = tl->next = a;
    }

    void pop() //O(1)
    {
        if(hd == NULL) // if(sz == 0) //
        {    
            cout<<"empty"<<endl;
            // tl = NULL;
            return;
        }
        Node* dlt = hd;
        hd = hd->next;
        delete dlt;
        sz--;
    }

    int size() //O(1)
    {
        return sz;
    }

    bool empty() // O(1)
    {
        // return hd==NULL;
        return sz==0;
    }

    int front() //O(1)
    {
        if(hd != NULL)
            return hd->val;
        else
            return -1; //empty
    }
};

int main()
{
    queue_ q;

    q.push(1);
    // q.push(2);
    // q.push(3);

    // q.pop(); // 1
    // q.pop(); // 2
    // q.pop(); // 3
    // q.pop(); // empty
    // // q.pop(); // empty

    // q.push(4);
    // q.push(5);
    // q.push(6);

    // // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;

    if(q.empty())
        cout<<"empty!"<<endl;
    else
        cout<<"Not empty"<<endl;


    // int n; cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     int x; cin>>x;
    //     q.push(x);
    // }

    // while(!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }


return 0;
}