#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
const int INF = INT_MAX;

typedef pair<int,int> pr;

vector <pr> adj[N];
vector <int> weight(N,INF); //initial weight INF

bool Bellman_Ford(int n, int s)
{
    bool relax;
    weight[s] = 0; //source

    for(int i=1; i<=n; i++) // n iteration
    {
        relax = false;
        for(int u=1; u<=n; u++)
        {
            if(weight[u] == INF) continue; //not from source s
            for(pr vpr : adj[u])
            {
                int v = vpr.first;
                int w = vpr.second;
                if(weight[v] > weight[u]+w)
                {
                    weight[v] = weight[u] + w; //relax node v
                    relax = true;
                //if no cycle shortest distance should be found within (n-1) iteration
                }
            } 
        }
    }

    return relax;
}

void print(int n)
{
    for(int i=1; i<=n; i++)
        cout<<i<<"-"<<weight[i]<<endl;
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }

    int s; cin>>s;

    if(Bellman_Ford(n,s))
        cout<<"Negative weight cycle!\n";
    else
        print(n);

return 0;
}