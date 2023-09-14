#include<bits/stdc++.h>
#define ll long long //defining long long as ll
using namespace std;

const int N = 1e3+5; // #items
const int W = 1e3+5; // capacity
ll memo[N][W]; //initially 0


int main()
{
    int n; cin>>n; //number of items
    int w; cin>>w; //Knapscak capacity
    int val[n+1];
    int weight[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i]>>weight[i];
    }


    for(int i=1; i<=n; i++) //O(n*w)
    {
        for(int s=1; s<=w; s++) //finding for all weight & all #items
        {
            if(weight[i] <= s) //can take ith item
            {
                ll take = val[i] + memo[i-1][s-weight[i]];
                ll not_take = memo[i-1][s];
                
                memo[i][s] = max(take, not_take);
            }
            else //can't take ith item | not enough space to take
                memo[i][s] = memo[i-1][s]; 
        }
    }

    cout<<"Max value table:\n";
    for(int i=0; i<=n; i++)
    {
        for(int s=0; s<=w; s++)
        {
            cout<<memo[i][s]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nMax value: "<<memo[n][w]<<endl;


return 0;
}