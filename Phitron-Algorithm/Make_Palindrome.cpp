#include<bits/stdc++.h>
using namespace std;

const int N =1e3+5;
int memo[N][N];

int LCS(string a, int i, string b, int j)
{
    if(i==0 | j==0) return 0;

    if(memo[i][j] != -1) return memo[i][j];

    if(a[i-1]==b[j-1])
    {
        return memo[i][j] = LCS(a,i-1,b,j-1)+1;
    }
    return memo[i][j] = max(LCS(a,i-1,b,j),LCS(a,i,b,j-1));
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string a; cin>>a;
        string b = a;
        reverse(b.begin(),b.end());
        int s=a.size();

        // memset(memo, -1, sizeof(memo));
        // cout<<s-LCS(a,s,b,s)<<endl;

        int memo[s+1][s+1];
        memset(memo, 0, sizeof(memo));
        for(int i=1; i<=s; i++)
        {
            for(int j=1; j<=s; j++)
            {
                if(a[i-1]==b[j-1])
                {
                    memo[i][j] = memo[i-1][j-1]+1;
                }
                else
                    memo[i][j] = max(memo[i-1][j],memo[i][j-1]);
            }
        }
        cout<<s-memo[s][s]<<endl;
    }

return 0;
}