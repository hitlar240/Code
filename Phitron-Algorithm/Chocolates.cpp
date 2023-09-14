#include<bits/stdc++.h>
using namespace std;

int memo[1003][1003];

bool equal(int i, int r, int a[])
{
    if(i==0) return r==0;

    if(memo[i][r] != -1) return memo[i][r]; 

    if(a[i] <= r)
    {
        return memo[i][r] = equal(i-1,r-a[i],a) || equal(i-1,r,a);
    }
    else
        return memo[i][r] = equal(i-1,r,a);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+1];
        int s = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s += a[i];
        }

        if(s%2 == 0)
        {
            for(int i=0; i<=n; i++)
                for(int j=0; j<=s/2; j++)
                    memo[i][j] = -1; //initialize

            if(equal(n,s/2,a))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }

return 0;
}