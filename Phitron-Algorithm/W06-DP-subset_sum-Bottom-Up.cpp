#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
bool memo[N][N]; //initially false


int main()
{
    int n,s; cin>>n>>s;
    int val[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i];
    }

    memo[0][0] = true; // s=0 is possible if there is no value
    
    for(int i=1; i<=n; i++)
    {
        for(int rem=0; rem<=s; rem++) // rem starts from 0 as s=0 is possible
        {
            if(rem == 0) 
                memo[i][rem] = true; //s=0 is possible by not taking any value

            else if(val[i] <= rem) //can take ith value
            {
                memo[i][rem] = memo[i-1][rem-val[i]] || memo[i-1][rem];
            }
            else //cannot take ith value
                memo[i][rem] = memo[i-1][rem];
        }
    }

    int cnt = 0;
    cout<<"Subset Sum Table: (True/False)\n";
    for(int i=0; i<=n; i++)
    {
        cnt += memo[i][s]; //counting possible combinations
        for(int j=0; j<=s; j++)
        {
            cout<<memo[i][j]<<" ";
        }
        cout<<endl;
    }


    if(memo[n][s])
        cout<<"Yes - "<<cnt<<endl;
    else
        cout<<"No\n";

return 0;
}