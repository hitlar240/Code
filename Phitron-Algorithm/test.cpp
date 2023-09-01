#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int N = 1e3+5;
const int INF = INT_MAX;
vector <pr> adj[N];
vector <long long int> weight(N, INF);

bool Bellman_Ford(int n, int s)
{
    weight[s] = 0;
    bool relax;
    for(int i=1; i<=n; i++)
    {
        relax = false;
        for(int u=1; u<=n; u++)
        {
            if(weight[u] == INF) continue;
            for(pr ed : adj[u])
            {
                int v = ed.first;
                int w = ed.second;
                if(weight[v] > weight[u]+w)
                {
                    weight[v] = weight[u]+w;
                    relax = true;
                }
            }
        }
    }
    return !relax; // at nth iteration
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
    {
        int t; cin>>t;
        while(t--)
        {
            int d; cin>>d;
            if(weight[d] == INF)
                cout<<"Not Possible\n";
            else
                cout<<weight[d]<<endl;
        }
    }
    else
        cout<<"Negative Cycle Detected\n";


return 0;
}