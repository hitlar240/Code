#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> node;

const int N = 1e3+5;

// vector <string> grid; //array of strings
char grid[N][N];


int main()
{
//2D-grid: each cell as a node
    
    int r,c; cin>>r>>c;

// //input grid: string as row
//     for(int i=0; i<r; i++)
//     {
//         string row; cin>>row;
//         grid.push_back(row); //
//     }
// //output grid: string as row
//     for(string row : grid)
//     {
//         cout<<row<<endl;
//     }

// input grid as matrix
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>grid[i][j];
        }
        getchar(); //ignore '\n' after each row
    }
// output grid as matrix
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }


return 0;
}