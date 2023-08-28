#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m; cin>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    
    int n; cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    int c[m+n];

    int L[m+1];
    for(int i=0; i<m; i++)
        L[i] = a[i];

    int R[n+1];
    for(int i=0; i<n; i++)
        R[i] = b[i];

    L[m] = INT_MIN;
    R[n] = INT_MIN;

    int lp=0, rp=0;
    for(int i=0; i<m+n; i++)
    {
        if(L[lp] >= R[rp])
        {
            c[i] = L[lp];
            lp++;
        }
        else 
        {
            c[i] = R[rp];
            rp++;
        }
    }

    for(int i=0; i<m+n; i++)
    {
        cout<<c[i]<<" ";
    }


return 0;
}