#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
int memo[N][N]; //initially 0-false

int cnt; // initially 0

bool sum(int rem, int i, int val[]) //O(n*m)
{
    if(i==0) return rem == 0; 
    // {
    //     int c = (rem == 0);
    //     cnt += c; //counting possible combinations
    //     return c;
    // }

//Memoization
    if(memo[i][rem] != -1) return memo[i][rem]; 
    // {
    //     cnt += memo[i][rem]; //counting possible combinations
    //     return memo[i][rem];
    // }

    if(val[i] <= rem) //can take ith value
    {
        return memo[i][rem] = sum(rem-val[i], i-1, val) | sum(rem, i-1, val);
    }
    else //cannot take ith value
        return memo[i][rem] = sum(rem, i-1, val);
}

int main()
{
    int n,s; cin>>n>>s;
    int val[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i];
    }

//initialize memo
// i,j starting from 0, as s=0 is possible by not taking any value
    for(int i=0; i<=n; i++)
        for(int j=0; j<=s; j++)
            memo[i][j] = -1; // neither true nor false 


    if(sum(s,n,val))
        {
            cout<<"Yes"<<endl;
            // cout<<"Yes - "<<cnt<<endl;
        }
    else
        cout<<"No\n";

return 0;
}