#include<bits/stdc++.h>
#define INF 1e9
using namespace std;

const int N = 1e3+5;
int memo[N][N]; //initially 0

int UK(int i, int r, int v[])
{
    if(i==0) //return r==0;
    {
        if(r==0) return 0;
        else return INF;
    }

    if(memo[i][r] != -1) return memo[i][r];

    if(v[i] <= r)
    {
        return memo[i][r] = min(1+UK(i,r-v[i],v), UK(i-1,r,v));
    }
    else
        return memo[i][r] = UK(i-1,r,v);
}

int main()
{
    int n,s; cin>>n>>s; //#coins, sum
    int val[n+1];
    for(int i=1; i<=n; cin>>val[i++]);

//initialize 
    for(int i=0; i<=n; i++)
        for(int j=0; j<=s; j++)
            memo[i][j] = -1;

//min #coins
    cout<<UK(n,s,val)<<endl;


return 0;
}