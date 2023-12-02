#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        int A=0, B=0, C=0;

        if(a==b && b==c) A=B=C=1;

        else if(a==b && b!=c) C=1;
        else if(b==c && c!=A) A=1;
        else if(c==a && a!=b) B=1;

        else if(a>b && a>c) A=1;
        else if(b>c && b>a) B=1;
        else if(c>a && c>b) C=1;


        cout<<A<<" "<<B<<" "<<C<<endl;
    }

return 0;
}