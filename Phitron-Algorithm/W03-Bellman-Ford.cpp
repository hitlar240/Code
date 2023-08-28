#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int u,v,w;
    Edge(int a, int b, int w)
    {
        u = a;
        v = b;
        this->w = w; 
    }
};

const int N = 1e3+7;
const int INF = INT_MAX;

typedef pair<int,int> pr;

// vector <pr> adj[N]; //adjecency list
// vector <pair<pr,int>> adj; //edges list
vector <Edge> adj;

vector <int> weight(N,INF); //initial weight INF


void bellman_ford(int n, int s) //O(n*m)
{
    weight[s] = 0;

    for(int i=1; i<=n-1; i++) //O(n-1)
    {
    // //adjecency list:
    //     for(int u=1; u<=n; u++) //O(m)
    //     {
    //         for(pr vpr : adj[u])
    //         {
    //             int v = vpr.first;
    //             int w = vpr.second;
    //             if(weight[u] == INF) continue; // u not from source     
    //         //relaxation
    //             // if(weight[u]+w < weight[v])
    //             //     weight[v] = weight[u]+w; 
    //             weight[v] = min(weight[u]+w, weight[v]); //relax node v
    //         }
    //     }

    // //edges list:
    //     for(auto ed : adj) //O(m)
    //     {
    //         pr edpr = ed.first;
    //         int u = edpr.first;
    //         int v = edpr.second;
    //         int w = ed.second;
    //         if(weight[u] == INF) continue; // u not from source
    //     //relaxation
    //         weight[v] = min(weight[u]+w, weight[v]); //relax node v
    //     }

    //edge class
        for(Edge ed : adj)
        {
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;
            if(weight[u] == INF) continue; // u not from source
            weight[v] = min(weight[u]+w, weight[v]); //relax node v
        }

    }
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        // adj[u].push_back({v,w}); //adj list
        // adj.push_back({{u,v},w}); //edges list

        Edge ed(u,v,w);
        adj.push_back(ed); //edge class
    }

    int s; cin>>s;
    bellman_ford(n,s); //O(n*m)
    //sparse graph: O(n^2) | m ~ n
    //complete graph: O(n^3) | m ~ n(n-1)/2

    for(int i=1; i<=n; cout<<i<<"-",cout<<weight[i++]<<endl);

return 0;
}