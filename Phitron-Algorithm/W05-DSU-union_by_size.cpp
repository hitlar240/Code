#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector <int> parent(N,-1);
vector <int> size_(N,1);

int find(int c)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void unionSize(int u, int v) //O(α(n)) -> O(~4)
{
    int leaderU = find(u);
    int leaderV = find(v);
    if(leaderU != leaderV) //not connected yet!
    {
        if(size_[leaderU] > size_[leaderV])
            parent[leaderV] = leaderU,
            size_[leaderU] += size_[leaderV];

        else // if(size_[leaderU] <= size_[leaderV])
            parent[leaderU] = leaderV,
            size_[leaderV] += size_[leaderU];
    }
}


int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        unionSize(u,v);
    }

    int c; cin>>c;
    cout<<find(c)<<endl;

return 0;
}