//#include<bits/stdc++.h>
#include<iostream>
#include<math.h> // pow()
using namespace std;

long long int eq(long long int x, long long int n)
{
    long long int s = 0;
    for(int i=2; i<=n; i+=2)
    {
        s = s*1.0 + pow(x*1.0, i*1.0);
        cout<<pow(x*1.0, i*1.0)<<endl;
    }

    return s;
}
// long long int eq(long long int x, long long int n, long long int k)
// {
//     if(k > n) return 0;
//     long long int m = 1;
//     for(int i=0; i<k; i++)
//     {
//         m*=x;
//     }

//     return m + eq(x,n,k+2);
// }

int main()
{
    long long int x,n;
    cin>>x>>n;

    cout<<eq(x,n)<<endl;
    // cout<<eq(x,n,2)<<endl;


return 0;
}