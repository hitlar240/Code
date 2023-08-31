#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
// int parent[1003]; // 0
vector <int> parent(N,-1); // -1

int find(int c) //O(n)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void union_(int u, int v) //O(n)
{
    int leaderU = find(u);
    int leaderV = find(v);
    if(leaderU != leaderV) //not connected yet!
        parent[leaderV] = leaderU,
        cout<<v<<"-->"<<parent[leaderV]<<endl;
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        union_(u,v);
    }

    int c; cin>>c;
    cout<<find(c)<<endl;

return 0;
}