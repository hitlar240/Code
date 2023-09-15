#include<bits/stdc++.h>
#define ll long long 
using namespace std;


const ll INF = 1e9+7;
const int N = 1e3+3;
ll memo[N][N]; //intitially 0

ll UK(int r, int i, int v[])
{
    if(i==0) return r==0;

    if(memo[i][r] != -1) return memo[i][r];

    if(v[i] <= r)
    {
        return memo[i][r] = UK(r-v[i],i,v)%INF + UK(r,i-1,v)%INF;
    }
    else
        return memo[i][r] = UK(r,i-1,v)%INF;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        memset(memo, -1, sizeof(memo));
       
        cout<<UK(1000-m,n,a)%INF<<endl;
    }

return 0;
}