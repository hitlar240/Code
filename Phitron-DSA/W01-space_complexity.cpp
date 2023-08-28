//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
//space complexity: mount of memory or space required by an algorithm
    
    int n,m; // O(1) -> constant space

    cin>>n>>m; // n,m -> input space
    int s = n+m; // s -> auxiliary space

    int array[n]; // O(N)
    int matrix[n][m]; // O(N^2)

return 0;
}

/*
memory limit: size ~(10^6)

O(N)        ->   N = 10^6
O(sqrt(N))  ->   N = 10^12
O(N^2)      ->   N = 10^3
O(log(N))   ->   N = ~(10^18)
O(Nlog(N))  ->   N = ~(10^5)

*/