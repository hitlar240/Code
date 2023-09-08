#include<bits/stdc++.h>
#define ll long long // defining long long as ll
using namespace std;

const int N = 1e5+5;
vector <ll> memo(N, -1); //initialize with -1

ll fibo(int n) //O(n) <- O(2n)
{
    if(n == 1) return 1;
    if(n == 0) return 0;

    if(memo[n] != -1)
        return memo[n];

//Memoization
    return memo[n] = fibo(n-1) + fibo(n-2);
    //assign & return memo[n]
}

int main()
{
    int n; cin>>n;
    cout<<fibo(n)<<endl;

return 0;
}