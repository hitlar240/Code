#include<bits/stdc++.h>
using namespace std;

int G(int x, int y)
{
    int a = max(x,y);
    int b = min(x,y);

    while(b!=0)
    {
        int A = b;
        b = a%b;
        a = A;
    }

    return a;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y,k; cin>>x>>y>>k;
        cout<<G(x,y)*2<<endl;

    }

return 0;
}