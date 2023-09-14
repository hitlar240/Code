#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int memo[N][N]; //initially 0
string lcs;

int LCS(string a, int s1, string b, int s2) //O(s1*s2)
{
    if(s1==0 | s2==0) return 0; //base case

    if(memo[s1][s2] != -1) return memo[s1][s2];

    if(a[s1-1] == b[s2-1])
    {
        lcs += a[s1-1];
        return memo[s1][s2] = LCS(a,s1-1,b,s2-1)+1;
    }
    else
    {
        return memo[s1][s2] = max(LCS(a,s1-1,b,s2), LCS(a,s1,b,s2-1));
    }
}

int main()
{
    string a,b; cin>>a>>b;
    int s1=a.size(), s2=b.size();

//initialize memo
    // for(int i=0; i<=s1; i++)
    //     for(int j=0; j<=s2; j++)
    //         memo[i][j] = -1;

//set all values as 0 or -1 for integral data types
//will not work if we use it to set as other values
//The reason is memset works byte by byte 
    memset(memo, -1, sizeof(memo)); 

    cout<<LCS(a,s1,b,s2)<<endl;
    

//Memoization table
    // 0th column -> a = "empty"
    // 0th row    -> b = "empty"
    for(int i=0; i<=s1; i++)
    {
        for(int j=0; j<=s2; j++)
        {
            if(memo[i][j]==-1)
                cout<<"- "; // - for -1
            else
                cout<<memo[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}