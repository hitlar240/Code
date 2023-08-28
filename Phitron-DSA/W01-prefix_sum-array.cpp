#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n], p[n];

    int s = 0;
    for(int i=0; i<n; i++) //O(N)
    {
        cin>>a[i];
        s += a[i];
        p[i] = s; //comutative sum | prefix sum
    }

    for(int i=0; i<n; cout<<a[i++]<<" "); 
    cout<<endl;

    for(int i=0; i<n; cout<<p[i++]<<" "); 

return 0;
}