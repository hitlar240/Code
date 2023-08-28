#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5; // array size
// vector <int> adj_list[N]; //global
vector <pair<int,int>> adj_list[N];

int main()
{
//n vertex; m edges;
    int n,m; cin>>n>>m;

// adj_list[i] -> list for each node i 
    // vector <int> adj_list[n+1]; //local
    // vector <pair<int,int>> adj_list[n+1];

//input Graph
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;

        // adj_list[u].push_back(v);
        // adj_list[v].push_back(u); // undirected graph

        adj_list[u].push_back({v,w}); //weighted
        adj_list[v].push_back({u,w});
    }

//output Graph
    for(int i=1; i<=n; i++)
    {
        cout<<"Adjecent list of "<<i<<" : ";
        for(auto adj : adj_list[i])
            cout<<"("<<adj.first<<","<<adj.second<<") ";

        cout<<endl;
    }


return 0;
}