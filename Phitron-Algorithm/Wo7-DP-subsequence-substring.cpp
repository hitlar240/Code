#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int memo[N][N]; //initially 0

// int LCS(string a, int i, string b, int j) //subsequence
// {
//     if(i==0 | j==0) return 0;

//     if(memo[i][j] != -1) return memo[i][j];

//     if(a[i-1]==b[j-1])
//     {
//         return memo[i][j] = LCS(a,i-1,b,j-1) + 1;
//     }
//     else
//         return memo[i][j] = max(LCS(a,i-1,b,j),LCS(a,i,b,j-1));
// }

int LCS(string a, int i, string b, int j) //substring
{
    if(i==0 | j==0) return 0;

    if(memo[i][j] != -1) return memo[i][j];

    if(a[i-1]==b[j-1])
    {
        return memo[i][j] = LCS(a,i-1,b,j-1) + 1;
    }
    else
        return memo[i][j] = 0;
}

int main()
{
    string a,b; cin>>a>>b;

    memset(memo, -1, sizeof(memo)); //initialize memo

    if(a.size()==LCS(a,a.size(),b,b.size()))
        cout<<"A is a subsequence/string of B\n";
    else
        cout<<"A is not a subsequence/string of B!\n";

return 0;
}