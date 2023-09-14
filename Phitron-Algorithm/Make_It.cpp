#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
int memo[N];

bool make(int n)
{
    if(n==1) return true;
    if(n<1) return false;

    if(memo[n] != -1) return memo[n];

    if(n%2==0)
    {
        return memo[n] = make(n-3) || make(n/2);
    }
    else
        return memo[n] = make(n-3);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        for(int i=0; i<=n; i++)
            memo[i] = -1; //initialize

        if(make(n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

return 0;
}