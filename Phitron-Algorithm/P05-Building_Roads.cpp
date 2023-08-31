#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
vector <int> height(N, 0);
vector <int> parent(N, -1);


int find(int c)
{
    while(parent[c] != -1)
    {
        c = parent[c];
    }
    return c;
}

void unionRank(int u, int v)
{
    int leaderU = find(u);
    int leaderV = find(v);
    if(leaderU != leaderV) //not connecated yet!
    {
        if(height[leaderU] > height[leaderV])
            parent[leaderV] = leaderU;
        else if(height[leaderU] < height[leaderV])
            parent[leaderU] = leaderV;
        else
            parent[leaderV] = leaderU,
            height[leaderU]++;
    }
}

int main()
{
    int n,m; cin>>n>>m;
    while(m--)
    {
        int u,v; cin>>u>>v;
        unionRank(u,v);
    }

    map <int,bool> mp;
    set <int> st;

    for(int i=1; i<=n; i++)
    {
        // mp[find(i)] = true;
        st.insert(find(i));
    }

    vector <int> vtr;
//map 
    // for(pair<int,bool> pr : mp)
    // {
    //     vtr.push_back(pr.first);
    // }
    
//set
    for(int r : st)
    {
        vtr.push_back(r);
    }

    cout<<vtr.size()-1<<endl;
    for(int i=0; i<vtr.size()-1; i++)
    {
        cout<<vtr[i]<<" "<<vtr[i+1]<<endl;
    }
    

return 0;
}