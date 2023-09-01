#include<bits/stdc++.h>
#define pr pair<int,int>
using namespace std;

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

bool cmp(Edge a, Edge b)
{
    return a.w < b.w; // increasing order
}

const int N = 1e5+3;

vector <int> parent(N,-1); //parent -1 initially
vector <int> height(N, 0); //height 0 initially

vector <Edge> edge; //input edge list
vector <Edge> edgeList; //MST edge list
bool visited[N];

int find(int c) //find leader of c
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void unionRank(int u, int v)
{
    int ldrU = find(u);
    int ldrV = find(v);
    if(ldrU != ldrV)
    {
        if(height[ldrU] > height[ldrV])
            parent[ldrV] = ldrU;
        else if(height[ldrU] < height[ldrV])
            parent[ldrU] = ldrV;
        else
            parent[ldrV] = ldrU,
            height[ldrU]++;
    }
}

void Kruskal()
{
    sort(edge.begin(), edge.end(), cmp); //in ascending order of weight
    for(Edge ed : edge)
    {
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;
        int ldrU = find(u);
        int ldrV = find(v);
        if(ldrU == ldrV) continue; //already connected
        unionRank(u,v); //connecting nodes
        edgeList.push_back(ed);
    }
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
        edge.push_back(Edge(u,v,w));
    }

    cout<<"Edge List:\n";
    Kruskal();

return 0;
}