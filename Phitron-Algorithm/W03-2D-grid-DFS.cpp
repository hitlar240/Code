#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
// vector <string> grid; //array of strings
char grid[N][N];
bool visited[N][N];
string path;
int r, c; //global

bool valid(int i, int j)
{
    return (i>=0 && i<r) && (j>=0 && j<c);
}

void dfs(int i, int j)
{
    if(!valid(i,j)) return; //out of grid
    if(grid[i][j] == '#') return; //blocked cell
    if(visited[i][j]) return;

    visited[i][j] = true;

    dfs(i, j-1); //left
    dfs(i, j+1); //right
    dfs(i-1, j); //up
    dfs(i+1, j); //down
}

int room(int r, int c)
{
    int count = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(grid[i][j] == '#') continue; //blocked cell
            if(visited[i][j]) continue;
            dfs(i,j);
            count++; //connected component
            // cout<<i<<","<<j<<" \n";
        }
    }
    return count;
}

int main()
{
//2D-grid: each cell as a node
    // int r,c; 
    cin>>r>>c;

// //input grid: string as row
//     for(int i=0; i<r; i++)
//     {
//         string row; cin>>row;
//         grid.push_back(row); //
//     }

// input grid as matrix
    int ai,aj,bi,bj;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>grid[i][j];
        }
        getchar(); //ignore '\n' after each row
    }

    cout<<room(r,c)<<endl;

return 0;
}