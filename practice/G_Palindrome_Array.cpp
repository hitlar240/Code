//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; cin>>a[i++]);

    int p = 1; //flag
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        if(a[i] != a[j])
        {
            p = 0;
            break;
        }
    }

    if(p == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

return 0;
}