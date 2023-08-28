#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+4;
vector <int> adj_list[N];
bool visited[N];

void dfs(int u)
{    
    cout<<u<<" ";
    visited[u] = true;
    for(int v : adj_list[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}

void bfs(int i)
{
    queue <int> q;
    q.push(i);
    visited[i] = true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        visited[u] = true;
        cout<<u<<" ";

        for(int v : adj_list[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
        }
    }
}

int connected(int n)
{
    int count = 0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]) continue;
        visited[i] = true;
        count ++;
        // dfs(i);
        bfs(i);
        cout<<endl;
    }
    return count;
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

// //output
//     for(int i=1; i<=n; i++)
//     {
//         cout<<i<<": ";
//         for(int a : adj_list[i])
//             cout<<a<<" ";
//         cout<<endl;
//     }

    cout<<connected(n)<<endl;

return 0;
}