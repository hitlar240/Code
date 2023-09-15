#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9+5;
const int N = 1e3+3;
int memo[N][N]; //intitially 0

int UK(int r, int i, int v[])
{
    if(i==0) 
    {
        if(r==0) return 0;
        else return INF;
    }

    if(memo[i][r] != -1) return memo[i][r];

    if(v[i] <= r)
    {
        return memo[i][r] = min(1+UK(r-v[i],i,v),UK(r,i-1,v));
    }
    else
        return memo[i][r] = UK(r,i-1,v);
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
        int cnt = UK(1000-m,n,a);
        if(cnt==INF)
            cout<<-1<<endl;
        else
            cout<<cnt<<endl;
    }

return 0;
}