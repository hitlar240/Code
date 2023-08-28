#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector <int> adj[N];
bool visited[N];
int level[N];
int parent[N];

int bfs_level(int n)
{
    queue <int> q;
    q.push(1);
    visited[1] = true;
    // level[1] = 0;
    parent[1] = -1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v : adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
            if(v == n) return level[v];
        }
    }
    return 0;
}

vector<int> path(int n)
{
    vector <int> path;
    while(n != -1)
    {
        path.push_back(n);
        n = parent[n];
    }
    reverse(path.begin(),path.end());
    return path;
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

    if(int p = bfs_level(n)) // assign p=bfs(n) & if p=0 -> false
    {
        cout<<p+1<<endl;
        for(int r : path(n))
        {
            cout<<r<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"IMPOSSIBLE\n";

return 0;
}