#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    queue <int> q;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        q.push(x);
    }

    stack <int> s;
    while(!q.empty()) // copy to stack fronm queue
    {
        s.push(q.front());
        q.pop();
    }

    queue <int> q2;
    while(!s.empty()) // copy to another queue from stack
    {
        q2.push(s.top()); // reverse of q
        s.pop();
    }


    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }


return 0;
}