#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int main()
{
    int n,s; cin>>n>>s;
    int val[n+1];
    for(int i=1; i<=n; cin>>val[i++]);

    int memo[n+1][s+1];
    memo[0][0] = 0; //initialize 0th row
    for(int j=1; j<=s; memo[0][j++]=INF);

    for (int i=1; i<=n; i++)
    {
        for (int r= 0; r<= s; r++)
        {
            if (val[i] <= r)
            {
                memo[i][r] = min(1 + memo[i][r-val[i]], memo[i-1][r]);
            }
            else
            {
                memo[i][r] = memo[i - 1][r];
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << memo[i][j] << " ";
        }
        cout << endl;
    }
    // if (dp[n][s] == INT_MAX - 1)
    //     cout << "Not Possible" << endl;
    // else
        cout << memo[n][s] << endl;
    return 0;
}