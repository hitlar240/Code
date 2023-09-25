#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e9+7;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,d; cin>>n>>d;
        int val[n+1];
        ll s = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>val[i];
            s += val[i];
        }

        if(d <= s && (s+d)%2==0)
        {
            ll memo[n+1][s+1];
            memo[0][0] = 1; 
            for(int j=1; j<=s; j++) //initialize 1st row
                memo[0][j]=0;

            for(int i=1; i<=n; i++)
            {
                for(ll r=0; r<=(s+d)/2; r++)
                {
                    if(val[i] <= r)
                    {
                        memo[i][r] = memo[i-1][r-val[i]]%N + memo[i-1][r]%N;
                    }
                    else 
                        memo[i][r] = memo[i-1][r]%N;
                }
            }
            cout<<memo[n][(s+d)/2]%N<<endl;
        }
    }
    

return 0;
}