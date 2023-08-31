#include<bits/stdc++.h>
#define pr pair<int,int> //defining pr
using namespace std;


typedef pair<int,pr> W_edge;

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

const int N = 1e5+3;
vector <pr> adj[N]; //array of pair
bool visited[N]; // initially false
vector <Edge> edgeList; //array of object


void Prims(int s)
{
//min-heap: w.r.t. 1st element (weight)
    priority_queue <W_edge, vector<W_edge>, greater<W_edge>> pq;
    pq.push({0,{s,s}}); 

    while(!pq.empty())
    {
        int w = pq.top().first; //weight
        int u = pq.top().second.first; //from
        int v = pq.top().second.second; //to
        pq.pop();
    //u = v = 1 will be visited first
        if(visited[v]) continue; 
        visited[v] = true;
        edgeList.push_back(Edge(u,v,w));

        for(pr chld : adj[v])
        {
            int a = v; //from
            int b = chld.first; //to
            int c = chld.second; //weight
            if(visited[b]) continue;
            pq.push({c,{a,b}});
        }
    }
    edgeList.erase(edgeList.begin()); //to erage edge 1-1 0
    for(Edge ed : edgeList)
    {
        cout<<ed.u<<"-"<<ed.v<<" "<<ed.w<<endl;
    }
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    cout<<"Edge List:"<<endl;
    int s; cin>>s;
    Prims(s);

return 0;
}