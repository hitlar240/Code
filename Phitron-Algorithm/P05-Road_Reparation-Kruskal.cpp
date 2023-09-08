#include<bits/stdc++.h>
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
    return a.w < b.w;
}

const int N = 1e5+1;
vector <Edge> edge; //input
// vector <Edge> edgeList; //MST
vector <int> parent(N,-1); //parent -1 initially
vector <int> parentSize(N,1); //

int find(int c)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void unionSize(int ldrU, int ldrV)
{
    if(parentSize[ldrU] > parentSize[ldrV])
        parent[ldrV] = ldrU,
        parentSize[ldrU] += parentSize[ldrV];
    else //if(parentSize(ldrU) <= parentSize(ldrV))
        parent[ldrU] = ldrV,
        parentSize[ldrV] += parentSize[ldrU];
}

long long Kruskal()
{
    long long cost = 0;
    sort(edge.begin(), edge.end(),cmp);
    for(Edge ed : edge)
    {
        if(find(ed.u) == find(ed.v)) continue; //already connected
        unionSize(find(ed.u), find(ed.v)); // (ldrU, ldrV)
        cost += ed.w;
        // edgeList.push_back(ed);
    }
    return cost;
}


int main()
{
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v,w; cin>>u>>v>>w;
        edge.push_back(Edge(u,v,w));
        // edge.push_back(Edge(v,u,w));
    }

    long long cost = Kruskal();

    // if(edgeList.size() == n-1)
    if(parentSize[find(1)] == n)
        cout<<cost<<endl;
    else
        cout<<"IMPOSSIBLE\n"<<endl;



return 0;
}