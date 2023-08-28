#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector <int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int s) //O(n+m)
{
    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v : adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            level[v] = level[u] + 1;
        }
    }
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

//output:
    for(int u=1; u<=n; u++)
    {
        cout<<u<<": ";
        for(int v : adj[u])
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }

//shortest distance = level
    int s,d; cin>>s>>d;
    bfs(s); 
    cout<<"level: "<<level[d]<<endl;

//path
    // vector <int> pth;
    stack <int> pth;
    while(d != -1) //O(n)
    {
        // pth.push_back(d);
        pth.push(d);
        d = parent[d];
    }
    cout<<"path: ";
    // reverse(pth.begin(), pth.end());
    // for(int p : pth)
    // {
    //     cout<<p<<" ";
    // }
    while(!pth.empty())
    {
        cout<<pth.top()<<" ";
        pth.pop();
    }

return 0;
}