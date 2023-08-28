// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm> // sort()
using namespace std;

int main()
{
    int n; 
    cin>>n;

    int a[n];
    for(int i=0; i<n; cin>>a[i++]);

    // sort(a,a+n); //sort ascending order
    // sort(a+1,a+4); //sort from a[1] to before a[4]

    // sort(from,to,comparison_fun())
    // sort(a,a+n,greater<int>()); //sort descending order
    sort(a+1,a+4,greater<int>()); //sort from a[1] to before a[4]
    
    for(int i=0; i<n; cout<<a[i++]<<" ");

return 0;
}