#include<bits/stdc++.h>
using namespace std;

int memo[1003][1003];

bool mark(int i, int r, int a[])
{
    if(i==0) return r==0;

    if(memo[i][r] != -1) return memo[i][r];

    if(a[i] <= r)
    {
        return memo[i][r] = mark(i-1,r-a[i],a) || mark(i-1,r,a);
    }
    else
        return memo[i][r] =mark(i-1,r,a);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int a[n+1];
        int s = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s += a[i];
        }

        if(s < 1000-m)
            cout<<"NO\n";
        else if(s == 1000-m)
            cout<<"YES\n";
        else
        {
            for(int i=0; i<=n; i++)
                for(int j=0; j<=1000-m; j++)
                    memo[i][j] = -1; //initialize

            if(mark(n,1000-m,a))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }

return 0;
}