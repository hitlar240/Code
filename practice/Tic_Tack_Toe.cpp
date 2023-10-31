#include<bits/stdc++.h>
using namespace std;

char x[4][4];
char t[4][4];

void initialize()
{
    for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++)
        {
            x[i][j] = '-';
            t[i][j] = true;
        }
}

bool grid()
{
    cout<<x[1][1]<<" | "<<x[1][2]<<" | "<<x[1][3]<<endl;
    cout<<"----------"<<endl;
    cout<<x[2][1]<<" | "<<x[2][2]<<" | "<<x[2][3]<<endl;
    cout<<"----------"<<endl;
    cout<<x[3][1]<<" | "<<x[3][2]<<" | "<<x[3][3]<<endl;

    cout<<endl;
    bool flag = false;
    for(int i=1; i<=3; i++)
        for(int j=1; j<=3; flag= flag | t[i][j++]);

    return flag;
}

int main()
{
    initialize();
    // grid();

    // x[2][2] = 'O';

    // cout<<grid();

    int n = 0;
    while(grid())
    {
        int i,j;
        cout<<"[i,j]: "; cin>>i>>j;
        cout<<endl;

        if(t[i][j])
        {
            if(n%2 == 0)
                x[i][j] = 'X';
            else
                x[i][j] = 'O';

            t[i][j] = false;
            n++;
        }
        else
            cout<<"Cell is not empty!\n";

    }

    if(x[1][1]==x[2][2] && x[1][1]==x[3][3])
        cout<<x[2][2]<<" wins!\n";
    else if(x[1][3]==x[2][2] && x[1][3]==x[3][1])
        cout<<x[2][2]<<" wins!\n";

    // else if
    // for(int j=1; j<=3; j++)
    // {
    //     if(x[1][1]==x[1][2] && x[1][1]==x[1][3])
    //         cout<<x[1][1]<<" wins!\n";
    // }

    else if(x[1][1]==x[1][2] && x[1][1]==x[1][3])
        cout<<x[1][1]<<" wins!\n";
    else if(x[2][1]==x[2][2] && x[2][1]==x[2][3])
        cout<<x[2][1]<<" wins!\n";
    else if(x[3][1]==x[3][2] && x[3][1]==x[3][3])
        cout<<x[3][1]<<" wins!\n";

     else if(x[1][1]==x[2][1] && x[1][1]==x[3][1])
        cout<<x[1][1]<<" wins!\n";
    else if(x[1][2]==x[2][2] && x[1][2]==x[3][2])
        cout<<x[1][2]<<" wins!\n";
    else if(x[1][3]==x[2][3] && x[1][3]==x[3][3])
        cout<<x[1][3]<<" wins!\n";

    else
        cout<<"No result!\n";


return 0;
}