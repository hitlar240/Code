//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm> //min(), sort()
#include<utility> //swap()
using namespace std;

void sort_(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int mx = i;
        for(int j=i+1; j<n; j++)
        {
        //selection sort
            if(a[mx] > a[j])
                mx = j;

        //buble sort
            // if(a[i] != min(a[i],a[j]))
            //     swap(a[i],a[j]);
        }
        swap(a[mx],a[i]);
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; cin>>a[i++]);

    // sort_(a, n); // call by reference
    sort(a,a+n);

    for(int i=0; i<n; cout<<a[i++]<<" ");


return 0;
}