#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=5;
//pre-decrement: 1st decrease, then check if 0/false or not
    while(--t) 
//post-decrement: 1st check if 0/false or not, then decrease  
    // while(t--) 
    {
        cout<<t<<" ";
    }
    cout<<t<<" ";

return 0;
}