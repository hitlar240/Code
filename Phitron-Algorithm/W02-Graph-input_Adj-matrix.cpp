#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+7; 
int adj_mat[N][N]; //global 

int main()
{
//n vertex; m edges;
    int n,m; cin>>n>>m; 

// int adj_mat[n+1][n+1] = {0}; //local 

//input Graph
    while(m--)
    {
        int u,v,w; cin>>u>>v>>w;
        // adj_mat[u][v] = 1;
        // adj_mat[v][u] = 1; //undirected graph
        
        adj_mat[u][v] = w; //weighted
        adj_mat[v][u] = w; 
    }

//output Graph
    cout<<"Adjecency matrix:\n";

    for(int i=1; i<=n; i++) // ignore 0-th row
    {
        for(int j=1; j<=n; j++) // ignore 0-th column
        {
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}