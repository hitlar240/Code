#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int INF = INT_MAX;
const int N = 1e3+9; 

vector <pr> adj[N];
bool visited[N];
vector <long long int> weight(N,INF);

void dijkstra(int s)
{
    priority_queue <pr, vector<pr>, greater<pr>> pq;
    weight[s] = 0;
    pq.push({weight[s],s});

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for(pr vpr : adj[u])
        {
            int v = vpr.first;
            int w = vpr.second;

            if(visited[v]) continue;
            if(weight[u]+w < weight[v])
            {
                weight[v] = weight[u] + w;
                pq.push({weight[v],v});
            }
        }
    }
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
    }

    int s; cin>>s;
    dijkstra(s);

    int t; cin>>t;
    while(t--)
    {
        int d,dw; cin>>d>>dw;

        if(weight[d] <= dw)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

return 0;
}