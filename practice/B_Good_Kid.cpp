#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        int a[n];
        for(int i=0; i<n; cin>>a[i++]);

        sort(a,a+n);

        int p = a[0]+1;
        for(int i=1; i<n; p *= a[i++]);

        cout<<p<<endl;
    }

return 0;
}