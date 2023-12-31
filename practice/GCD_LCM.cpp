#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int t;
    while(b%a!=0)
    {
        t=a;
        a=b%a;
        b=t;
    }
    return a;
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum +=lcm(arr[i],arr[j])/gcd(arr[i],arr[j]);
        }
    }
    cout<<sum<<endl;

return 0;
}