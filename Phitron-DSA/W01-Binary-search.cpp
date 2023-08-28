#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; cin>>a[i++]); //O(N)

// sort array
    sort(a, a+n); //O(Nlog(N))
    // for(int i=0; i<n; cout<<a[i++]<<" ");
    // cout<<endl;

// binary search
    int x; cin>>x; //search for x

    int l=0, r=n-1; //index

    bool f = false; //flag

    while(l <= r) //O(log(N))
    {
        int mid = (l+r)/2; 
        // cout<<l<<" "<<r<<" "<<mid<<"-"<<a[mid]<<endl;
        
        if(a[mid] == x)
        {
            f = true;
            break;
        }

        if(x > a[mid])
            l = mid+1;
        else if(x < a[mid])
            r = mid-1;
    }

    if(f == true) cout<<"found"<<endl;
    else cout<<"not found"<<endl;

return 0;
}