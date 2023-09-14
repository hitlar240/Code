#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s; cin>>n>>s;
    int val[n+1];
    for(int i=1; i<=n; cin>>val[i++]);

    int memo[n+1][s+1];
//Base Casse:
    memo[0][0] = 1; //initalize 0th row
    for(int j=1; j<=s; memo[0][j++]=0); //false


    for(int i=1; i<=n; i++)
    {
        for(int r=0; r<=s; r++) //r from 0 to initialize 0th column
        {
            if(val[i] <= r)
            {
                memo[i][r] = memo[i][r-val[i]] + memo[i-1][r];
            }
            else
                memo[i][r] = memo[i-1][r];
        }
    }

    cout<<"coin choise table: \n";
    for(int i=0; i<=n; i++)
    {
        for(int r=0; r<=s; cout<<memo[i][r++]<<" ");
        cout<<endl;
    }

    cout<<memo[n][s]<<endl;

return 0;
}