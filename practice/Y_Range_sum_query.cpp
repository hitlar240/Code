#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n,q; cin>>n>>q;

    long long a[n],p[n];

    long long s = 0;
    for(int i=0; i<n; i++) //O(N)
    {
        cin>>a[i];
        s += a[i];
        p[i] = s; // comutative sum upto index i
    }

    while(q--) //O(Q)  //O(N+Q)
    {
        int l,r; cin>>l>>r;
        l--; r--; // index
        if(l == 0)
            cout<<p[r]<<endl;
        else
            cout<<p[r]-p[l-1]<<endl;
    }
    
return 0;
}