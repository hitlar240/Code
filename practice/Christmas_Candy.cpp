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

        int count = 0, b = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]-1-b > 0)
                count += a[i]-1-b;

            if(a[i] > b)
                b = a[i];
        }

        cout<<count<<endl;

    }

return 0;
}