#include<bits/stdc++.h>
using namespace std;

class queue_ 
{
public:
    vector <int> v;
    
    int sz = 0;
    bool empty() 
    {
        return sz==0;
    }

    void enqueue(int data) 
    {
        sz++;
        v.push_back(data);
    }

    int dequeue() 
    {
        if(!empty())
        {
            int x = v.front();
            v.erase(v.begin());
            sz--;
            return x;
        }
        else
            return -1;
    }

    int front() 
    {
        if(!empty())
            return v.front();
        else
            return -1;
    }
};

int main()
{
    queue_ q;

    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        q.enqueue(x);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.dequeue();
    }

return 0;
}