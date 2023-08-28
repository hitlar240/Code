#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

const int N = 1e3+5;
vector <string> row; //array of strings
bool visited[N][N];
int r, c; //global

// pr d[4] = {{-1,0},{1,0},{0,1},{0,-1}}; //directions
vector <pr> dir = {{-1,0},{1,0},{0,1},{0,-1}}; //directions

bool valid(int i, int j)
{
    return (i>=0 && i<r) && (j>=0 && j<c);
}

void dfs(int i, int j)
{
    if(!valid(i,j)) return; //out of grid
    if(row[i][j] == '#') return; //blocked cell
    if(visited[i][j]) return;

    visited[i][j] = true;

    // dfs(i, j-1); //left
    // dfs(i, j+1); //right
    // dfs(i-1, j); //up
    // dfs(i+1, j); //down

    // for(int k=0; k<4; k++)
    //     dfs(i+d[k].first, j+d[k].second);
    
    for(pr d : dir)
        dfs(i+d.first, j+d.second);
}

int room(int r, int c)
{
    int count = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(row[i][j] == '#') continue; //blocked cell
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
    // int r,c; 
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        string st; cin>>st;
        row.push_back(st);
    }

    cout<<room(r,c)<<endl;

return 0;
}