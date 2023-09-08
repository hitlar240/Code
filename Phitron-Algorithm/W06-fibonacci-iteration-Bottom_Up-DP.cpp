#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // int n; cin>>n;
    // if(n == 0)
    //     cout<<1<<endl;
    // else if(n == 1)
    //     cout<<1<<endl;
    // else
    // {
    //     ll fibo1=0, fibo2=1; //initial conditions
    //     for(int i=2; i<=n; i++) //O(n)
    //     {
    //         ll tmp = fibo1;
    //         fibo1 = fibo2; 
    //         fibo2 = tmp + fibo2; 
    //     }
    //     cout<<fibo2<<endl;
    // }

    int n; cin>>n;
    ll fibo[n+1]; //array of size (n+1)
    //initial conditions
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=n; i++) //O(n)
        fibo[i] = fibo[i-1] + fibo[i-2];
    
    cout<<fibo[n]<<endl;

return 0;
}