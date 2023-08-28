//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int *array(int n)
{
    // int a[n]; //static array
    int *p = new int[n]; //dinamic array
    for(int i=0; i<n; cin>>p[i++]);

    return p;
}

int main()
{
    int n;
    cin>>n;

    int *a = array(n);

    int m;
    cin>>m;

    // int b[m]; //static array
    int *b = new int[m]; //dinamic array
    for(int i=0; i<n; i++)
    {
        b[i] = a[i];
    }
    for(int i=n; i<m; cin>>b[i++]);

    for(int i=0; i<m; cout<<b[i++]<<" ");
    cout<<endl;

    // delete[] a; //remove array a[n] from heap memory

    for(int i=0; i<n; cout<<a[i++]<<" ");
    cout<<endl;

return 0;
}