#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    // vector<int> v; //declare vector size 0
    // int n; cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     int x; cin>>x;
    //     v.push_back(x);
    // }
    // for(int a : v)
    // {
    //     cout<<a<<" ";
    // }


    int n; cin>>n;
    vector<int> v(n); //declare vector of size n of 0s 
    for(int i=0; i<n; cin>>v[i++]); //overwrite values
    for(int i=0; i<n; cout<<v[i++]<<" ");

return 0;
}