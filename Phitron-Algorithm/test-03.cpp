#include<bits/stdc++.h>
using namespace std;


const int N = 1e3+3;
const long long int INF = 1e14+3;
long long int weight[N][N];


void initialize(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i != j) weight[i][j] = INF;
        }
    }
}

void Floyd_Warshall(int n)
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                weight[i][j] = min(weight[i][k]+weight[k][j],weight[i][j]);
            }
        }
    }
}

int main()
{
    int n,e; cin>>n>>e;
    initialize(n);
    while(e--)
    {
        int a,b;
        long long int w; 
        cin>>a>>b>>w;
        weight[a][b] = min(weight[a][b], w);
    }

    Floyd_Warshall(n);

    int q; cin>>q;
    while(q--)
    {
        int x,y; cin>>x>>y;
        if(weight[x][y] == INF)
            cout<<-1<<endl;
        else
            cout<<weight[x][y]<<endl;
    }

return 0;
}