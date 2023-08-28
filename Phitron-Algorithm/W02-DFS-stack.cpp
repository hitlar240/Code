#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
vector <int> adj_list[N];
bool visited[N];
int level[N];

void bfs(int i)
{
    stack <int> q;
    q.push(i);
    visited[i] = true;

    while(!q.empty())
    {
    //pop a node & push its unvisited neighbours in the queue
        int u = q.top();
        q.pop();
        cout<<u<<" ";
        for(int v : adj_list[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            // level[v] = level[u] + 1;        
        }
    }
    cout<<endl;
}

int main()
{
//input
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

// level -> shortest distance from root
// output
    for(int i=1; i<=n; i++)
    {
        cout<<i<<": ";
        for(int a : adj_list[i])
            cout<<a<<" ";
        cout<<endl;
    }

    bfs(1);

return 0;
}