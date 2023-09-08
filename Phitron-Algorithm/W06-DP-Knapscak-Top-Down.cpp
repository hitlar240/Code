#include<bits/stdc++.h>
#define ll long long //defining long long as ll
using namespace std;

const int N = 1e3+5; // #items
const int W = 1e3+5; // capacity
ll memo[N][W]; //initially 0

ll Knapscak(int i, int s, int weight[], int val[]) //O(n*w)
{
    if(i==0 || s==0) return 0; //base case

    if(memo[i][s] != -1) //Memoization
        return memo[i][s]; 

    if(s >= weight[i]) //can take ith item
    {
        ll take = val[i] + Knapscak(i-1, s-weight[i], weight, val);
        ll not_take = Knapscak(i-1, s, weight, val);

        return memo[i][s] = max(take, not_take);
    }
    else //can't take ith item | not enough space to take
        return memo[i][s] = Knapscak(i-1, s, weight, val); 
        // check if, can take (i-1)th item
}

int main()
{
    int n; cin>>n; //number of items
    int val[n+1];
    int weight[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i]>>weight[i];
    }
    int w; cin>>w; //Knapscak capacity

//initialize
    for(int i=0; i<=n; i++)
        for(int j=0; j<=w; j++)
            memo[i][j] = -1;


    cout<<Knapscak(n, w, weight, val)<<endl;


return 0;
}