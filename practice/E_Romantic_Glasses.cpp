#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];

        int o,e=n/2;
        if(n%2==0) o = n/2;
        else o = n/2 +1;


        long long int pre_od[o], pre_ev[e];

        int j=0,k=0; 
        long long int od=0, ev=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0) //odd 
            {
                pre_od[j++] = od += a[i]; //prefix sum
            }
            else 
            {
                pre_ev[k++] = ev += a[i]; //prefix sum
            }
        }
        // cout<<od<<" "<<ev<<endl;

        
    }

return 0;
}