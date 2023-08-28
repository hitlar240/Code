//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int mx=max(a,b);
    mx=max(mx,c);
    
    int mn=min(a,b);
    mn=min(mn,c);

    cout<<mn<<" "<<mx<<endl;

return 0;
}