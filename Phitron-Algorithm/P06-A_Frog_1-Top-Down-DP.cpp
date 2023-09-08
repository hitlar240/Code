#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5+5;
vector <ll> memo(N, -1);

ll cost(int h[], int n)
{
    if(n == 1) return 0; // = abs(h[1]-h[1])
    if(n == 2) return abs(h[2]-h[1]);

//Memoization Top-Dowm
    if(memo[n] != -1) return memo[n];
    
    ll cost1 = cost(h,n-1)+abs(h[n]-h[n-1]);
    ll cost2 = cost(h,n-2)+abs(h[n]-h[n-2]);
        
    return memo[n] = min(cost1, cost2);
}

int main()
{
    int n; cin>>n;
    int h[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
    }

    cout<<cost(h,n)<<endl;

return 0;
}