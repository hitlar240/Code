#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int memo[N][N]; //initially 0

int UK(int i, int r, int v[])
{
    if(i==0) return r==0;

    if(memo[i][r] != -1) return memo[i][r];

    if(v[i] <= r)
    {
        return memo[i][r] = UK(i,r-v[i],v) + UK(i-1,r,v);
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

//#ways to make sum
    cout<<UK(n,s,val)<<endl;


return 0;
}