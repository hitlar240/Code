#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

bool same(stack <int> a, queue <int> b)
{
    if(a.size() != b.size())
        return false;

    while(!a.empty())
    {
        if(a.top() != b.front())
            return false;
        a.pop();
        b.pop();
    }

    return true;
}

int main()
{
    stack <int> s;
    int a; cin>>a;
    for(int i=0; i<a; i++)
    {
        int x; cin>>x;
        s.push(x);
    }
    
    queue <int> q;
    int b; cin>>b;
    for(int i=0; i<b; i++)
    {
        int x; cin>>x;
        q.push(x);
    }

    if(same(s, q))
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

return 0;
}