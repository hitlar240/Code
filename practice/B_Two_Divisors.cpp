#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b)
{
    while(b != 0)
    {
        ll t = a;
        a = b;
        b = t%b;
    }

    return a;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;

        ll x;
        if(b%a) // a doesn't divide b
            x = a*b / gcd(a,b);
        else
            x = b*b/a;

        cout<<x<<endl;
    }

return 0;
}