//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fun(int n, char c)
{
    while(n--)
        {
            cout<<c<<" ";
        }
        cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        // getchar(); // ignore '\n'
        char c; cin>>c;

        fun(n,c);
    }

return 0;
}