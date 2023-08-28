#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n; 
    vector<int> v(n);

    for(int i=0; i<n; cin>>v[i++]);

    reverse(v.begin(), v.end());
    for(int i=0; i<n; cout<<v[i++]<<" ");
    
    // for(int i=n-1; i>=0; cout<<v[i--]<<" ");

return 0;
}