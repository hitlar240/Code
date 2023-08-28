#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr; // defining data type pr

const int N = 1e5+9;
const int INF = INT_MAX;

vector <pr> adj[N];
bool visited[N];
// int weight[N];
// vector <bool> visited(N); // initialize vector with N elements each = false
vector <int> weight(N, INF); // initialize vector with N elements each = INF
int parent[N];

void dijkstra(int s) //O(n+2m) -> O(n+m)
{
    priority_queue <pr, vector<pr>, greater<pr>> pq; //min-heap
    weight[s] = 0;
    pq.push({weight[s],s}); // priority w.r.t. 1st element (weight)
    parent[s] = -1;

    while(!pq.empty())
    {
        int u = pq.top().second; //node with least weight
        pq.pop(); //O(n)
        visited[u] = true;

        for(pr vpr : adj[u]) //O(2m)
        {
            int v = vpr.first; //node
            int w = vpr.second; //weight

            if(visited[v]) continue;
            if(weight[v] > weight[u] + w) //relaxation
            {
                weight[v] = weight[u] + w;
                pq.push({weight[v],v});
                parent[v] = u;
            }
        }
    }
}

vector <int> path(int u)
{
    vector <int> pth;
    while(u != -1)
    {
        pth.push_back(u);
        u = parent[u];
    }
    reverse(pth.begin(), pth.end());
    return pth;
}

int main()
{
//input:
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

// //output:
//     for(int u=1; u<=n; u++)
//     {
//         cout<<u<<": ";
//         for(auto v : adj[u])
//         {
//             cout<<v.first<<"("<<v.second<<") ";
//         }
//         cout<<endl;
//     }

//SSSP: single source shortest path
    int s; cin>>s;
    dijkstra(s); //Dijkstra Algorithm

    for(int i=1; i<=n; i++) //shortest distance weighted graph
    {
        cout<<i<<"("<<weight[i]<<") -> ";
        for(int p : path(i))
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }


return 0;
}