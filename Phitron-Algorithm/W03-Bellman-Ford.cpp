#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int N = 1e3+7;
const int INF = INT_MAX;

vector <pr> adj[N]; //adjecency list
// vector <pair<pr,int>> adj; //edges list

vector <int> weight(N,INF);


void bellman_ford(int n, int s) //O(n*m)
{
    weight[s] = 0;

    for(int i=1; i<=n-1; i++) //O(n-1)
    {
    //adjecency list:
        for(int u=1; u<=n; u++) //O(m)
        {
            for(pr vpr : adj[u])
            {
                int v = vpr.first;
                int w = vpr.second;
                if(weight[u] == INF) continue; // u not from source
            
            //relaxation
                // if(weight[u]+w < weight[v])
                //     weight[v] = weight[u]+w; 
                weight[v] = min(weight[u]+w, weight[v]); 
            }
        }

    // //edges list:
    //     for(auto ed : adj) //O(m)
    //     {
    //         pr edpr = ed.first;
    //         int u = edpr.first;
    //         int v = edpr.second;
    //         int w = ed.second;
    //         if(weight[u] == INF) continue; // u not from source
    //         if(weight[u]+w < weight[v])
    //             weight[v] = weight[u]+w; //relaxation
    //     }

    }
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w}); //adj list
        // adj.push_back({{u,v},w}); //edges list
    }

    int s; cin>>s;
    bellman_ford(n,s); //O(n*m)
    //sparse graph: O(n^2) | m ~ n
    //complete graph: O(n^3) | m ~ n(n-1)/2

    for(int i=1; i<=n; cout<<i<<"-",cout<<weight[i++]<<endl);

return 0;
}