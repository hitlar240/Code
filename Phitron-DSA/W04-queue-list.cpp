#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class queue_
{
    public:
    list <int> q;

    int sz = 0;

    void push(int v)
    {
        q.push_back(v);
    }

    void pop()
    {
        if(!q.empty())
            q.pop_front();
        else  
            cout<<"empty"<<endl;
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }

    int front()
    {
        if(!q.empty())
            return q.front();
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
    // q.pop(); // empty

    // q.push(4);
    // q.push(5);
    // q.push(6);

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