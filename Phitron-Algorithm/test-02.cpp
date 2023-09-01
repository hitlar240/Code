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

vector <int> parent(N, -1); //inisialize with -1
vector <int> parentSize(N, 1);

long long int cost;


int find(int c)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void dsu_union(int u, int v)
{
    int ldrU = find(u);
    int ldrV = find(v);

    if(parentSize[ldrU] > parentSize[ldrV])
    {
        parent[ldrV] = ldrU;
        parentSize[ldrU] += parentSize[ldrV];
    }
    else
    {
        parent[ldrU] = ldrV;
        parentSize[ldrV] += parentSize[ldrU];
    }
}

void Kruskal()
{
    sort(edge.begin(),edge.end(),cmp);
    for(Edge ed : edge)
    {
        if(find(ed.u) == find(ed.v)) continue;
        dsu_union(ed.u,ed.v);
        cost += ed.w;
    }
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b,w; cin>>a>>b>>w;
        edge.push_back(Edge(a,b,w));
    }

    Kruskal();

    if(parentSize[find(1)] == n)
        cout<<cost<<endl;
    else
        cout<<-1<<endl;

return 0;
}