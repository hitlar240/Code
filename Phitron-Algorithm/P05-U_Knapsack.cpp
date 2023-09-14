#include<bits/stdc++.h>
using namespace std;

int Knapscak(int i, int s, int w[], int v[])
{
    if(i==0 || s==0) return 0;

    if(s >= w[i])
    {
        return max(v[i]+Knapscak(i-1,s-w[i],w,v), Knapscak(i-1,s,w,v));
    }
    else
        return Knapscak(i-1,s,w,v);
}

int main()
{
    int n,w; cin>>n>>w;
    int weight[n+1], val[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>weight[i]>>val[i];
    }

    cout<<Knapscak(n,w,weight,val);

return 0;
}