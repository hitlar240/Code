#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
const long long int INF = 1e16+3;

int n,m;
long long int weight[N][N]; //adjecency matrix

void initialize() //O(n^2)
{
    for(int i=1; i<=n; i++) 
    {
        for(int j=1; j<=n; j++)
        {
            if(i != j) weight[i][j] = INF;
        }
    }
}

void print() //O(n^2)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(weight[i][j] == INF) 
                cout<<"x "; // printing x = INF
            else
                cout<<weight[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool Floyd_Warshall() //O(n^3)
{
    for(int k=1; k<=n; k++) //level 1,2,3,...,n
    {
        for(int i=1; i<=n; i++) //from
        {
            for(int j=1; j<=n; j++) //to
            {
            //relax edge //through each to every nodes
                weight[i][j] = min(weight[i][j], weight[i][k]+weight[k][j]);
            
            // from i to i weight must be 0
                if(i==j && weight[i][j] < 0) 
                    return false; //negative weight cyle!
            }
        }
    }
    return true;
}

int main()
{
    cin>>n>>m;

    initialize();

    for(int i=1; i<=m; i++) //level 0
    {
        int u,v,w; cin>>u>>v>>w;
        weight[u][v] = w;
        // weight[v][u] = w;
    }

    print();

    if(Floyd_Warshall()) //O(n^3)
        print();
    else
        cout<<"negative weight cyle!\n";

return 0;
}