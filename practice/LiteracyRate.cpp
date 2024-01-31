#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        float p,l; cin>>p>>l;
        if(l/p*100 >= 75)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

return 0;
}