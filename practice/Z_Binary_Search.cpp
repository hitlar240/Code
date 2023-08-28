#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n,q; cin>>n>>q;

    int a[n];
    for(int i=0; i<n; cin>>a[i++]); //O(N)

//sort
    sort(a,a+n); //O(Nlog(N))

    while(q--) //O(Q) //O(N) + Nlog(N) + Qlog(N))
    {
        int x; cin>>x;
        bool f = false;

    //binary search
        int l=0, r=n-1;
        while(l <= r) //O(log(N))
        {
            int mid = (l+r)/2;
            if(a[mid] == x)
            {
                f = true;
                break;
            }
            if(x < a[mid])
                r = mid-1;
            else if(x > a[mid])
                l = mid+1;
        }

        if(f == true)
            cout<<"found"<<endl;
        else 
            cout<<"not found"<<endl;
    }

return 0;
}