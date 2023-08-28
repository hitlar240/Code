#include<bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue <int> pr; //max-heap

    //priority_queue <int, vector<int>, compare_class<type> > pr;
    priority_queue <int, vector<int>, greater<int>> pr; //min-heap

    while(true)
    {
        int c; cin>>c;
        if(c == 0)
        {
            cout<<pr.top()<<endl; //O(1)
        }
        else if(c == 1)
        {
            int x; cin>>x;
            pr.push(x); //O(log(N))
        }
        else if(c == 2)
        {
            pr.pop(); //O(log(N))
        }
        else
            break;
    }

return 0;
}