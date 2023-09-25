#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector <int> adj[N]; 
bool vis[N]; //false

int stp(int x, int y)
{
    if(x==y) return 0;

    for(int i : adj[x])
    {
        for(int j : adj[y])
        {
            return min(stp(i,j)+1)
        }
    }

    if(!vis[x] && !vis[y])
    {
        return stp()
    }
}

int main()
{
    int n,e; cin>>n>>e;
    for(int i=0; i<n; i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int x,y,c; cin>>x>>y>>c;

    

return 0;
}