#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+1;
int memo[N][N]; //initally 0

//Top-Down:
int LCS(string a, int i, string b, int j)
{
    if(i==0 | j==0) return 0;

    if(memo[i][j] != -1) return memo[i][j];

    if(a[i-1]==b[j-1])
        return memo[i][j] = LCS(a,i-1,b,j-1) + 1;

    else
        return memo[i][j] = max(LCS(a,i-1,b,j), LCS(a,i,b,j-1));
}

int main()
{
    string a,b; cin>>a>>b;
    int s1=a.size(), s2=b.size();

//Top-Down:
    // memset(memo, -1, sizeof(memo)); //initalize memo with -1
    // cout<<"LCS = "<<LCS(a,s1,b,s2)<<endl;

//Bottom Up:
    memset(memo, 0, sizeof(memo)); //initalize memo with 0
    for(int i=1; i<=s1; i++)
    {
        for(int j=1; j<=s2; j++)
        {
            if(a[i-1]==b[j-1])
                memo[i][j] = memo[i-1][j-1]+1;
            else
                memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
        }
    }

    cout<<"LCS = "<<memo[s1][s2]<<endl;

//SCS = total length - LCS
    cout<<"SCS = "<<s1+s2-memo[s1][s2]<<endl;


return 0;
}