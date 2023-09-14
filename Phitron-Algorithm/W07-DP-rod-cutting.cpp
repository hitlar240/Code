#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
int memo[N][N]; //initially 0

int UK(int i, int s, int v[])
{
    if(i==0 || s==0) return 0;

    if(memo[i][s] != -1) return memo[i][s];

    if(i <= s) //cut-length <= remaining size
    {
        return max(v[i]+UK(i,s-i,v), UK(i-1,s,v));
    }
    else 
        return UK(i-1,s,v);
}

int main()
{
    int n; cin>>n; //length
    int val[n+1]; //length wise value
    for(int i=1; i<=n; cin>>val[i++]);

//initialize memo with -1
    for(int i=0; i<=n; i++)
        for(int j=0; j<=n; j++)
            memo[i][j] = -1; 

    cout<<UK(n,n,val)<<endl; //(cut-size,total length, value)

return 0;
}