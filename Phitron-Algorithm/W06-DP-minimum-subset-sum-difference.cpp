#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int val[n+1];
    int s = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>val[i];
        s += val[i];
    }

//Bottom Up:
    bool memo[n+1][s+1];
    memo[0][0] = true; 
    for(int j=1; j<=s; memo[0][j++]=false); //initialize 1st row

    for(int i=1; i<=n; i++)
    {
        for(int r=0; r<=s; r++)
        {
            if(val[i] <= r)
            {
                memo[i][r] = memo[i-1][r-val[i]] || memo[i-1][r];
            }
            else 
                memo[i][r] = memo[i-1][r];
        }
    }

    int mn = INT_MAX;
    for(int j=0; j<=s; j++)
    {
        if(memo[n][j])
        {
            cout<<j<<" "; //possible subset sums
            mn = min(mn, abs(2*j-s)); // |s1-s2| = |j-(s-j)|
        }
    }
    cout<<endl;

    cout<<mn<<endl;


return 0;
}