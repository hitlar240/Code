#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
int memo[N][N]; //initially 0

int UK(int i, int r, int v[], int w[]) //O(n*w)
{
    if(i==0 | r==0) return 0;

    if(memo[i][r] != -1) return memo[i][r];

    if(w[i] <= r)
    {
        return memo[i][r] = max(v[i]+UK(i,r-w[i],v,w), UK(i-1,r,v,w));
    }
    else
        return memo[i][r] = UK(i-1,r,v,w);
}

int main()
{
    int n,w; cin>>n>>w;
    int val[n+1], weight[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i]>>weight[i];
    }

//initialize memo with -1
    for(int i=0; i<=n; i++)
        for(int j=0; j<=w; j++)
            memo[i][j] = -1; 

    cout<<UK(n,w,val,weight)<<endl;

return 0;
}