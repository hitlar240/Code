#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int N = 1005; 
//global variables initialized with 0/false
bool visited[N][N]; // false
int level[N][N]; // 0

vector <pr> dir = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};

bool valid(int i, int j)
{
    return i>=1 && i<=8 && j>=1 && j<=8;
}

int bfs_level(int si, int sj, int ei, int ej)
{
//local variables initialized with garrbase values
    // bool visited[8+1][8+1]; // garbage values
    // int level[8+1][8+1]; // garbage values

    queue <pr> q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty())
    {
        pr u = q.front();
        int ui=u.first, uj=u.second;
        q.pop();

        for(pr d : dir) //direction 2.5 move
        {
            int vi=ui+d.first, vj=uj+d.second;

            if(!valid(vi,vj) || visited[vi][vj]) continue;
            q.push({vi,vj});
            visited[vi][vj] = true;
            level[vi][vj] = level[ui][uj] + 1;

            // if(vi==ei && vj==ej) return level[ei][ej];
        }
    }

    return level[ei][ej];
}

void reset()
{
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            visited[i][j] = false;
            level[i][j] = 0;
        }
    }
}

int main()
{
// chess-board: (8x8) grid
    int q; cin>>q;
    while(q--)
    {
        char si; cin>>si;
        int sj; cin>>sj;
        char ei; cin>>ei;
        int ej; cin>>ej;

        cout<<bfs_level(si-'a'+1,sj, ei-'a'+1,ej)<<endl; //1 index
        reset();
    }

return 0;
}