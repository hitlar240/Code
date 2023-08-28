//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int * get_array(int n)
{
    // int p[n]; //static array
    int *p;
    p = new int[n]; //dinamic array
    for(int i=0; i<n; cin>>p[i++]);

    return p; //address of p[0]
}

int main()
{
    int n;
    cin>>n;

    int *a;
    a = get_array(n);

    for(int i=0; i<n; cout<<a[i++]<<" ");

return 0;
}