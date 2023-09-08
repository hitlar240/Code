#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin>>n;
    ll h[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
    }
//Bottom-Up DP
    ll cost[n+1];
    cost[1] = 0; // = abs(h[1]-h[1])
    cost[2] = abs(h[2]-h[1]);
    for(int i=3; i<=n; i++)
    {
        ll cost1 = cost[i-1]+abs(h[i]-h[i-1]);
        ll cost2 = cost[i-2]+abs(h[i]-h[i-2]);
        cost[i] = min(cost1, cost2);
    }
    cout<<cost[n]<<endl;

return 0;
}