#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
vector <int> adj[N];
bool visited[N];

void bfs(int s)
{
    queue <int> q;
    q.push(s);
    visited[s]  = true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v : adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
        }
    }
}

void dfs(int u)
{
    visited[u] = true;
    for(int v : adj[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}

vector<int> component(int n)
{
    vector <int> disconnected;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]) continue;
        // dfs(i);
        bfs(i);
        disconnected.push_back(i);
    }
    return disconnected;
}

int main()
{
//input:
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector <int> road = component(n);

    // for(int r : road)
    // {
    //     cout<<r<<" ";
    // }
    // cout<<endl;

    cout<<road.size()-1<<endl;
    for(int i=1; i<road.size(); i++)
    {
        cout<<road[i-1]<<" "<<road[i]<<endl;
    }

return 0;
}