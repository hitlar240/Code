//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n], ev=0, od=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                ev++;
            else
                od++;
        }

        int o = 0;
        if(n%2 != 0)
            o = -1;
        else
        {
            if(ev > od)
                o = (ev-od)/2;
            else
                o = (od-ev)/2;
        }

        cout<<o<<endl;
    }

return 0;
}