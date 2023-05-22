//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fun(int n)
{
    return n%2==0 ? 1 : 0;
}

int main()
{
    int a;
    cin>>a;

// short-hand if-else
    a%2==0 ? cout<<"even"<<endl : cout<<"odd"<<endl;
    
    int n = a%2==0 ? 1 : 0;
    // int n = fun(a);

    cout<<n<<endl;

return 0;
}