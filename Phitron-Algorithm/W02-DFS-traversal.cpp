#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector <int> adj_list[N]; //global
bool visited[N];

void dfs(int i) //O(n+2m) -> O(n+m)
{
    //section 1: after entering node i
    cout<<i<<" ";
    visited[i] = true;
    for(int j : adj_list[i]) //O(2m)
    {
        //section 2: before entering new neighbour j
        if(visited[j]) continue;
        dfs(j); //O(n)
        //section 3: after exiting neighbour j
    }
    //section 4: exiting node i
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

//output Graph
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" : ";
        for(auto adj : adj_list[i])
            cout<<adj<<" ";

        cout<<endl;
    }

    dfs(1); //O(n+m)
// DFS: Depth First Search
// pre-order traversal
// disconnected components cannot be traveresed 

return 0;
}