#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
int memo[N][N]; // initially 0

int sum(int i, int rem, int v[])
{
    if(i == 0) return rem == 0; // 0/1

    if(memo[i][rem] != -1) return memo[i][rem];

    if(v[i] <= rem) //can take ith value
    {
        return memo[i][rem] = sum(i-1, rem-v[i], v) + sum(i-1, rem, v);
    }
    else //cannot take ith value
        return memo[i][rem] = sum(i-1, rem, v);
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
    for(int i=0; i<=n; i++)
        for(int j=0; j<=s; j++)
            memo[i][j] = -1;

    if(int cnt = sum(n,s,val)) //assign sum to cnt | false only when cnt=0
        cout<<"Yes - "<<cnt<<endl;
    else
        cout<<"No\n";

return 0;
}