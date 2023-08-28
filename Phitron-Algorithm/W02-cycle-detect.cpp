#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;
vector <int> adj_list[N];
bool visited[N];

// bool dfs(int u, int p=-1) //default argument if argument not passed
// {
//     visited[u] = true;
//     cout<<u<<": ";
//     for(int v : adj_list[u])
//     {
//         cout<<v<<"("<<p<<") ";
//         if(v == p) continue;
//         if(visited[v]) return true;
//         cout<<endl;
//         if(dfs(v,u)) return true;
//     }
//     cout<<endl;
//     return false;
// }

bool dfs(int u, int p=-1) //default argument if argument not passed
{
    bool f = false;
    visited[u] = true;
    // cout<<u<<": ";
    for(int v : adj_list[u])
    {
        // cout<<v<<"("<<p<<") ";
        if(v == p) continue;
        if(visited[v]) return true;
        cout<<endl;
        f |= dfs(v,u);
    }
    // cout<<endl;
    return f;
}

// bool cycle(int n)
// {
//     for(int i=1; i<=n; i++)
//     {
//         if(visited[i]) continue;
//         if(dfs(i)) return true;
//     }
//     return false;
// }

bool cycle(int n)
{
    bool f = false;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]) continue;
        // f |= dfs(i); //f=f||dfs(i);
        if(f |= dfs(i)) return true;
        cout<<endl<<endl;
    }
    return f;
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

    // dfs(1);
    // bfs(1);

// //output
//     for(int i=1; i<=n; i++)
//     {
//         cout<<i<<": ";
//         for(int a : adj_list[i])
//         {
//             cout<<a<<" ";
//         }
//         cout<<endl;
//     }

    if(cycle(n))
        cout<<"cycle\n";
    else
        cout<<"no cycle\n";

return 0;
}