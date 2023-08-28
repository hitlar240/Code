//#include<bits/stdc++.h>
#include<iostream>
#include<utility> //swap()
#include<math.h> // sqrt()
using namespace std;

int main()
{
// O(n) linear time: steps increase linearly with the input size
    // O(2n), O(n/2) ~ O(n)

    // int n; cin>>n;
    // int a[n];
    // for(int i=0; i<n; cin>>a[i++]); // O(n)
    // for(int i=0; i<n; cout<<a[i++]<<" "); // O(n)

// O(log(N)) logarithmic time: steps increase logarithmically sith input time
    
    // int n; cin>>n;
    // while(n > 0) //digit
    // {
    //     cout<<n%10<<" ";
    //     n/=10; //n=n/10;  // O(log(N))
    // }

    // for(int i=1; i<=n; i*=2) // O(log(N))
    // {
    //     cout<<i<<endl;
    // }

// O(sqrt(N))
    // int n; cin>>n;
    // // divisors of N
    // for(int i=1; i<=sqrt(n); i++) // O(sqrt(N))
    // // for(int i=1; i*i<=n; i++) // O(sqrt(N))
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<" "<<n/i<<" ";
    //     }  
    // }

// O(N^2)
    // int n, m=10; cin>>n;
    // // multiplication table of 1 to N
    // for(int i=1; i<=n; i++) //O(N)
    // {
    //     for(int j=1; j<=m; j++) //O(N)
    //     {
    //         cout<<i*j<<" ";
    //     }
    //     cout<<endl;
    // }

    // selection sort
    // int n=5; 
    // int a[5]={5,1,4,2,3};
    // for(int i=0; i<n-1; i++)
    // {
    //     for(int j=i+1; j<n; j++)
    //     {
    //         if(a[i] > a[j])
    //         {
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
    // for(int i=0; i<n; cout<<a[i++]<<" ");

// O(Nlog(N))
//  sort() <- O(Nlog(N))
    int n; cin>>n;
    for(int i=123; i<=123+n; i++) // O(N)
    {
        int x = i;
        // digits of x
        while(x > 0)
        {
            cout<<x%10<<" ";
            x/=10; // x=x/10; // O(log(N))
        }
        cout<<endl;
    }
        
return 0;
}
/*
time limit: 1s -> ~(10^7) steps

O(N)        ->   N = 10^7
O(sqrt(N))  ->   N = 10^14
O(N^2)      ->   N = 10^3
O(log(N))   ->   N = ~(10^18)
O(Nlog(N))  ->   N = ~(10^5)

*/