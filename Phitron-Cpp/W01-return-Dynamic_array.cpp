//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int *arr(int n)
{
    // int p[n];
    int *p;
    p = new int[n];
    for(int i=0; i<n; cin>>p[i++]);

    return p; // returning address of p[0] of heap memory
}

int main()
{
    int n;
    cin>>n;

    int *a = NULL; //initialization
    a = arr(n); // address of p[0] of heap memory

    // delete a; //delete var. of that address form heap memory i.e. p[0] 
    // delete[] a; //delete array p[n] form heap memory 
    
    cout<<a<<endl; // address of p[0] stored in stack memory
    for(int i=0; i<n; cout<<a[i++]<<" ");

return 0;
}