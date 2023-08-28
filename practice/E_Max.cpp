//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm> //max()
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; cin>>a[i++]);

    int mx = a[0];
    // for(int i=1; i<n; i++)
    // {
    //     mx = max(mx,a[i]);
    // }

    for(int i=1; i<n; mx = max(mx,a[i++]));

    cout<<mx<<endl;
    

return 0;
}