#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector <int> adj_list[N]; //global

bool visited[N];
int level[N];
int height[N];

void dfs(int i)
{
    visited[i] = true;
    for(int j : adj_list[i])
    {
        if(visited[j]) continue;
        
        level[j] = level[i] + 1;
    //ami 1st child er level ber kore dilam, baki gulo recursion kore nibe

        dfs(j); //recurrence function

    //nicher sobar height recursion ber kore anse, ami 1st tar height ber korbo
        height[i] = max(height[i],height[j]+1);
    }
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

    dfs(1); 

    for(int i=1; i<=n; i++)
    {
        cout<<i<<":"<<" level="<<level[i]<<" height="<<height[i]<<endl;
    }

return 0;
}