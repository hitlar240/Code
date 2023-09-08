#include<bits/stdc++.h>
using namespace std;
#define pr pair<int,int>

class Edge
{
    public:
    int u,v,w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class cmp
{
    public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

const int N = 1e5+3;
vector <pr> adj[N];
// vector <Edge> edge; //intput
vector <Edge> edgeList; // MST
bool visited[N]; // false

long long Prims(int s)
{
    long long cost = 0;
    priority_queue <Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(s,s,0));

    while(!pq.empty())
    {
        Edge ed = pq.top();
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;
        pq.pop();
        if(visited[v]) continue;
        visited[v] = true;
        edgeList.push_back(ed);
        cost += w;

        for(pr vpr : adj[v])
        {
            if(visited[vpr.first]) continue;
            pq.push(Edge(v,vpr.first,vpr.second));
        }
    }
    return cost;
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        // edge.push_back(Edge(u,v,w));
        adj[u].push_back({v,w});
        adj[v].push_back({u,w}); //undirected
    }

    long long cost = Prims(1);

    edgeList.erase(edgeList.begin()); //erege (1,1,0)
    // for(Edge ed : edgeList)
    // {
    //     cout<<ed.u<<"-"<<ed.v<<" "<<ed.w<<endl;
    // }

     if(edgeList.size() == n-1)
        cout<<cost<<endl;
    else
        cout<<"IMPOSSIBLE\n"<<endl;

return 0;
}