#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,w; cin>>n>>w;
    int val[n+1],weight[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i]>>weight[i];
    }

    int memo[n+1][w+1];
    for(int j=0; j<=w; memo[0][j++]=0); //initialize 0th row
    // for(int i=1; i<=n; memo[i++][0]=0); //initialize 0th column | no need if r starts from 0
    
    for(int i=1; i<=n; i++) //O(n*w)
    {
        for(int r=0; r<=w; r++) // r from 0 to initailize 0th coumn
        {
            if(weight[i] <= r)
            {
                memo[i][r] = max(val[i]+memo[i][r-weight[i]], memo[i-1][r]);
            }
            else 
                memo[i][r] = memo[i-1][r];
        }
    }

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=w; cout<<memo[i][j++]<<" ");
        cout<<endl;
    }

    cout<<memo[n][w]<<endl;

return 0;
}