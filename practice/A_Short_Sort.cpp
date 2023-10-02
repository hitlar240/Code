#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string st; cin>>st;
        if(st=="abc"|st=="acb"|st=="bac"|st=="cba")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

return 0;
}