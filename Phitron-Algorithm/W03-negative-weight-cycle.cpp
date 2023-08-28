#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int N = 1e3+7;
const int INF = INT_MAX;

vector <pair<pr,int>> adj; //edges list

vector <int> weight(N,INF);


bool bellman_ford(int n, int s) //O(n*m)
{
    weight[s] = 0;
    bool cycle = false;

    for(int i=1; i<=n; i++) //O(n)
    {
    //edges list:
        for(auto ed : adj) //O(m)
        {
            pr edpr = ed.first;
            int u = edpr.first;
            int v = edpr.second;
            int w = ed.second;
            if(weight[u] == INF) continue; // u not from source
            if(weight[u]+w < weight[v])
                weight[v] = weight[u]+w,
                cycle = i==n; //relaxation at n-th iteration
        }
    }

    return cycle;
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        adj.push_back({{u,v},w}); //edges list
    }

    int s; cin>>s;
    
    if(bellman_ford(n,s)) 
        cout<<"cycle!\n";
    else
    {
        cout<<"no cycle\n";
        for(int i=1; i<=n; cout<<i<<"-",cout<<weight[i++]<<endl);
    }

return 0;
}