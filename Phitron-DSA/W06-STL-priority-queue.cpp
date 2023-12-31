#include<bits/stdc++.h>
using namespace std;

int main()
{
    //priority_queue <int, vector<int>, compare_class<type> > pq;

    // priority_queue <int> pq; //max-heap
    priority_queue <int, vector<int>, greater<int>> pq; //min-heap

    pq.push(10);
    pq.push(40);
    pq.push(20);
    pq.push(50);
    pq.push(30);

    // cout<<pq.top()<<endl;
    // pq.pop();

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }



return 0;
}