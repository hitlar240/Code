#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int memo[N][N]; //initially 0

int LCS(string a, int i, string b, int j)
{
    if(i==0 | j==0) return 0;

    if(memo[i][j] != -1) return memo[i][j];

    if(a[i-1]==b[j-1])
    {
        return memo[i][j] = LCS(a,i-1,b,j-1)+1;
    }
    else
    {
        return memo[i][j] = max(LCS(a,i-1,b,j), LCS(a,i,b,j-1));
    }
}

int main()
{
    string a,b; cin>>a>>b;
    int s1=a.size(), s2=b.size();

    memset(memo, -1, sizeof(memo));

    int lcs = LCS(a,s1,b,s2);
    int dlt = a.size() - lcs;
    int insrt = b.size() - lcs;

    cout<<dlt+insrt<<endl;

return 0;
}