#include<bits/stdc++.h>
using namespace std;

int main()
{
//input:
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

return 0;
}