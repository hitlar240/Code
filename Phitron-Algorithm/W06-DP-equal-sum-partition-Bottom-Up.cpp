#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
int memo[N][N]; //initially 0


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
        memo[0][0] = true;
        for(int i=1; i<=n; i++)
        {
            for(int r=0; r<=s/2; r++)
            {
                if(val[i] <= r)
                {
                    memo[i][r] = memo[i-1][r-val[i]] | memo[i-1][r];
                }
                else
                    memo[i][r] = memo[i-1][r];
            }
        }
                
        if(memo[n][s/2])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    else
        cout<<"No\n";


return 0;
}