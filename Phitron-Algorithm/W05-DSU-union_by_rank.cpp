#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
vector <int> parent(N,-1);
vector <int> height(N,0);

int find(int c)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void union_rank(int u, int v) //O(α(n)) -> O(~4)
{
    int leaderU = find(u); 
    int leaderV = find(v); 
    if(leaderU != leaderV) //not connected yet!
    {
        if(height[leaderU] > height[leaderV])
            parent[leaderV] = leaderU,
            cout<<v<<"-->"<<parent[leaderV]<<endl;
        
        else if(height[leaderU] < height[leaderV]) 
            parent[leaderU] = leaderV,
            cout<<u<<"-->"<<parent[leaderU]<<endl;
        
        else 
            parent[leaderV] = leaderU,
            height[leaderU]++,
            cout<<v<<"-->"<<parent[leaderV]<<"="<<height[leaderU]<<endl;
    }
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        union_rank(u,v);
    }

    int c; cin>>c;
    cout<<find(c)<<endl;

return 0;
}