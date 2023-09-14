#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
int memo[N][N]; //initially 0

bool sum(int i, int r, int v[])
{
    if(i==0) return r==0;

    if(memo[i][r] != -1) return memo[i][r];

    if(v[i] <= r)
    {
        return memo[i][r] = sum(i-1, r-v[i], v) | sum(i-1, r, v);
    }
    else
        return memo[i][r] = sum(i-1, r, v);
}

int main()
{
    int n; cin>>n;
    int val[n+1];
    int s = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>val[i];
        s += val[i];
    }

    if(s%2 == 0) //2 equal subset sum possible
    {
    //initialize memo
        for(int i=0; i<=n; i++)
            for(int j=0; j<=s; j++)
                memo[i][j] = -1;
                
        if(sum(n,s/2,val))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    else
        cout<<"No\n";


return 0;
}