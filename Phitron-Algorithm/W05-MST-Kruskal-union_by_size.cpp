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

const int N = 1e5+3;
vector <Edge> edge; //input
vector <Edge> edgeList; //MST
vector <int> parent(N,-1); //parent -1 initially
vector <int> parentSize(N,1); //

int find(int c) //O(m)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void unionSize(int u, int v) //O(α(n)) ~ O(4)
{
    int ldrU = find(u); //O(m)
    int ldrV = find(v); //O(m)
    if(parentSize[ldrU] > parentSize[ldrV])
        parent[ldrV] = ldrU,
        parentSize[ldrU] += parentSize[ldrV];
    else //if(parentSize(ldrU) <= parentSize(ldrV))
        parent[ldrU] = ldrV,
        parentSize[ldrV] += parentSize[ldrU];
}

void Kruskal() //O(m+mlog(m)) <- O(2m+mlog(m))
{
    sort(edge.begin(), edge.end(),cmp); //O(mlog(m))
    for(Edge ed : edge) // O(m)
    {
        if(find(ed.u) == find(ed.v)) continue; //already connected
        unionSize(find(ed.u), find(ed.v)); // (ldrU, ldrV)
        edgeList.push_back(ed);
    }
    for(Edge ed : edgeList) //O(m)
    {
        cout<<ed.u<<"-"<<ed.v<<" "<<ed.w<<endl;
    }
}


int main()
{
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v,w; cin>>u>>v>>w;
        edge.push_back(Edge(u,v,w)); //undirected
    }

    cout<<"MST Edge List:\n";
    Kruskal();

return 0;
}