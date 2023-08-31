#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
vector <int> size_(N,1);
vector <int> parent(N,-1);
int com, mx = 0;


int find(int c)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void unionSize(int u, int v)
{
    int leaderU = find(u);
    int leaderV = find(v);
    if(leaderU != leaderV) //not connected yet!
    {
        com--;
        if(size_[leaderU] > size_[leaderV])
            parent[leaderV] = leaderU,
            size_[leaderU] += size_[leaderV],
            mx = max(mx, size_[leaderU]);
        else //if(size_[leaderU] <= size_[leaderV])
            parent[leaderU] = leaderV,
            size_[leaderV] += size_[leaderU],
            mx = max(mx, size_[leaderV]);
    }
    cout<<com<<" "<<mx<<endl;
}

int main()
{
    int n,m; cin>>n>>m;
    com = n; //n disjoint componenents
    while(m--)
    {
        int u,v; cin>>u>>v;
        unionSize(u,v);
    }

return 0;
}