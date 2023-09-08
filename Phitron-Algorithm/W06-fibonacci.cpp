#include<bits/stdc++.h>
using namespace std;

long long fibo(int n) // O(2^n) | very bad
{
    // if(n<=1) return 1; //if series starts from 1
    if(n == 1) return 1;
    if(n == 0) return 0; //if series starts from 0

    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n; cin>>n; // n ~ 20

    cout<<fibo(n)<<endl;

return 0;
}