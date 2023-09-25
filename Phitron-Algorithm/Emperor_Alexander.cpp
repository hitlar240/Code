#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int,ll> pr;


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

pr Kruskal()
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
    int cnt = 0;
    ll sum = 0;
    for(Edge ed : edgeList)
    {
        cnt++;
        sum += ed.w;
        // cout<<ed.u<<"-"<<ed.v<<" "<<ed.w<<endl;
    }
    return {cnt,sum};
}

int main()
{
    int n,m; cin>>n>>m;
    set <int> st;
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        edge.push_back(Edge(u,v,w));
        st.insert(u);
        st.insert(v);
    }

    if(st.size()==n)
    {
        pr P = Kruskal();
        cout<<P.first<<" "<<P.second<<endl;
    }
    else
        cout<<"Not Possible\n";

return 0;
}