#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,d; cin>>n>>d;
    int val[n+1];
    int s = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>val[i];
        s += val[i];
    }

    if(d <= s && (s+d)%2==0)
    {
    //Bottom Up:
        int memo[n+1][s+1];
        memo[0][0] = 1; 
        for(int j=1; j<=s; memo[0][j++]=0); //initialize 1st row

        for(int i=1; i<=n; i++)
        {
            // for(int r=0; r<=s; r++)
        //s1+s2=s,s1-s2=d => s1=(s+d)/2
            for(int r=0; r<=(s+d)/2; r++)
            {
                if(val[i] <= r)
                {
                    memo[i][r] = memo[i-1][r-val[i]] + memo[i-1][r];
                }
                else 
                    memo[i][r] = memo[i-1][r];
            }
        }

        // int cnt = 0;
        // for(int i=0; i<=n; i++)
        // {
        //     cnt += memo[i][s]; //counting possible combinations
        //     for(int j=0; j<=s; j++)
        //     // for(int j=0; j<=(s+d)/2; j++)
        //     {
        //         cout<<memo[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }


        cout<<memo[n][(s+d)/2]<<endl;
    }
    else
        cout<<"Not possible!\n";
    

return 0;
}