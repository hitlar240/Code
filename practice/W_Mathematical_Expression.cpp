//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    if(s == '+')
        a+b==c ? cout<<"Yes"<<endl : cout<<a+b<<endl;
    else if(s == '-')
        a-b==c ? cout<<"Yes"<<endl : cout<<a-b<<endl;
    else if(s == '*')
        a*b==c ? cout<<"Yes"<<endl : cout<<a*b<<endl;

return 0;
}