#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,s; cin>>n>>s;
    int val[n+1];
    for(int i=1; i<=n; i++)
        cin>>val[i];
    
//Bottom Up:
    int memo[n+1][s+1];
    memo[0][0] = 1; // s=0 is possible if there is no value
    for(int j=1; j<=s; memo[0][j++]=0); //initialize 1st row 
    
    for(int i=1; i<=n; i++)
    {
        for(int rem=0; rem<=s; rem++)
        {
            if(val[i] <= rem)
            {
                memo[i][rem] = memo[i-1][rem-val[i]] + memo[i-1][rem];
            }
            else
                memo[i][rem] = memo[i-1][rem];
        }
    }

    cout<<"Count Subset Sum Table:\n"; 
    for(int i=0; i<=n; i++)
    {    
        for(int j=0; j<=s; j++)
        {
            cout<<memo[i][j]<<" ";
        }   
        cout<<endl;
    }

    if(int cnt = memo[n][s]) //assign memo to cnt | false only when cnt=0
        cout<<"Yes - "<<cnt<<endl;
    else
        cout<<"No\n";

return 0;
}