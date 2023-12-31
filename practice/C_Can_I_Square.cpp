#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        long long int sum = 0;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            sum += x;
        }
        long long int sq = (long long int)sqrt(sum);
        if(sum == sq*sq)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

return 0;
}