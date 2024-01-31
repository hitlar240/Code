#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;

        int r = n/k;

        for(int i=1; i<=k; i++)
            cout<<r*i<<" ";
        cout<<endl;

    }

return 0;
}