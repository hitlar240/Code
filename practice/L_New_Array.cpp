#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    
    vector<int> a(n);
    for(int i=0; i<n; cin>>a[i++]);

    vector<int> b(n);
    for(int i=0; i<n; cin>>b[i++]);

    vector<int> c(b);
    c.insert(c.end(), a.begin(),a.end());

    for(int i=0; i<c.size(); cout<<c[i++]<<" ");

return 0;
}