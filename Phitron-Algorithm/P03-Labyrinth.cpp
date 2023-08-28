#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int N = 1e3+2;
// vector <string> grid; //vector of rows (strings)
char grid[N][N];

int n,m; //order of grid (nxm)
pr a,b; //indices of A,B

bool visited[N][N];
int level[N][N];
// vector <int> level[N](N,-1); // N elements each = -1 
pr parent[N][N];

// pr d[4] = {{-1,0},{1,0},{0,1},{0,-1}}; //up, down, left, right
vector <pr> dir = {{-1,0},{1,0},{0,-1},{0,1}}; //up, down, left, right


bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}


void bfs_level(int si, int sj)  
{
    queue <pr> q;
    q.push({si,sj});
    visited[si][sj] = true;
    // level[si][sj] = 0; //source
    parent[si][sj] = {-1,-1};

    while(!q.empty())
    {
        pr u = q.front();
        int ui=u.first, uj=u.second; 
        q.pop();

        // for(int k=0; k<4; k++) //direction
        for(auto d : dir) //direction
        {
            // int vi=ui+d[k].first, vj=uj+d[k].second; //adjecent directions
            int vi=ui+d.first, vj=uj+d.second; //adjecent directions

            if(!valid(vi,vj)) continue;
            if(grid[vi][vj]=='#') continue;
            if(visited[vi][vj]) continue;
            // if(!valid(vi,vj)||grid[vi][vj]=='#'||visited[vi][vj]) continue;

            q.push({vi,vj});
            visited[vi][vj] = true;
            level[vi][vj] = level[ui][uj] + 1;
            parent[vi][vj] = {ui,uj};
        }
    }
}

string path(int bi, int bj)
{
    vector <pr> direction;
    direction.push_back({bi,bj}); //B

    pr bp = parent[bi][bj]; // parent of B
    int ci=bp.first, cj=bp.second; //current

    while(ci!=-1 && cj!=-1) //back-track B to A
    {
        direction.push_back({ci,cj});

        pr cp = parent[ci][cj]; //parent of current
        ci=cp.first, cj=cp.second;
    }

    reverse(direction.begin(),direction.end()); // A to B

    string path; //string 'path' =/= function 'path()'
    for(int k=1; k<direction.size(); k++) // starting next to A
    {
        pr c = direction[k]; //current
        int ci=c.first, cj=c.second;
        pr p = direction[k-1]; //parent of current
        int pi=p.first, pj=p.second;

        if(ci==pi) //same row
        {
            if(pj-1 == cj) //left
                path.push_back('L');
            else //if(pj+1 == cj) //right
                path.push_back('R');
        }
        if(cj==pj) //same column
        {
            if(pi+1 == ci) //down
                path.push_back('D');
            else //if(pi-1 == ci) //up
                path.push_back('U');
        }
    }
    return path;
}


int main()
{
    // int n,m; 
    cin>>n>>m;

// // input grid as strings:
//     for(int i=0; i<n; i++)
//     {
//         string st; cin>>st;
//         grid.push_back(st);

//         for(int j=0; j<st.size(); j++) //j<m
//         {
//             if(grid[i][j]=='A') a = {i,j}; //track A
//             else if(grid[i][j]=='B') b = {i,j}; //track B
//         }
//     }

//input grid as matrix:
    for(int i=0; i<n; i++) //row
    {
        for(int j=0; j<m; j++) //column
        {
            cin>>grid[i][j];

            if(grid[i][j]=='A') a = {i,j}; //track A
            else if(grid[i][j]=='B') b = {i,j}; //track B
        }
        getchar(); //ignore '\n' after each row
    }


    bfs_level(a.first,a.second); //shortest distance

    if(level[b.first][b.second] != 0)
    {
        cout<<"YES\n"; // in block {}  using , insted of ;
        cout<<level[b.first][b.second]<<endl;
        cout<<path(b.first,b.second)<<endl; //end of the block ;
    }
    else
        cout<<"NO\n";


return 0;
}