#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;

        int a[n];
        for(int i=0; i<n; cin>>a[i++]);

        int i=0, count=0;
        while(i < n)
        {
            int s = 0;
            while(i<n && s<m)
            {
                s+=a[i++];
            }
            if(s >= m)
                count++;
        }

        cout<<count<<endl;

        
    }

return 0;
}