#include<bits/stdc++.h>
#define ll long long //defining long long as ll
using namespace std;

ll Knapscak(int i, int s, int weight[], int val[]) //O(2^n)
{
    if(i==0 || s==0) return 0;

    if(s-weight[i] >= 0) //can take ith item
    {
        ll take = val[i] + Knapscak(i-1, s-weight[i], weight, val);
        ll not_take = Knapscak(i-1, s, weight, val);

        return max(take, not_take);
    }
    else //can't take ith item | not enough space to take
        return Knapscak(i-1, s, weight, val); // check if, can take (i-1)th item
}

int main()
{
    int n; cin>>n; //number of items
    int val[n+1];
    int weight[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i]>>weight[i];
    }
    int w; cin>>w; //Knapscak capacity

    cout<<Knapscak(n, w, weight, val)<<endl;


return 0;
}