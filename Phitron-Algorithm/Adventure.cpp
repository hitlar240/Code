#include<bits/stdc++.h>
using namespace std;

int memo[1003][1003];

int Knapscak(int i, int s, int w[], int v[])
{
    if(s==0) return 0;

    if(memo[i][s] != -1) return memo[i][s];

    if(w[i] <= s)
    {
        return memo[i][s] = max(v[i]+Knapscak(i-1,s-w[i],w,v), Knapscak(i-1,s,w,v));
    }
    else
        return memo[i][s] = Knapscak(i-1,s,w,v);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int N,W; cin>>N>>W;
        int w[N+1];
        for(int i=1; i<=N; i++)
        {
            cin>>w[i];
        }
        int v[N+1];
        for(int i=1; i<=N; i++)
        {
            cin>>v[i];
        }

        for(int i=1; i<=N; i++)
            for(int j=1; j<=W; j++)
                memo[i][j] = -1; //initialiize

        cout<<Knapscak(N,W,w,v)<<endl;
    }

return 0;
}