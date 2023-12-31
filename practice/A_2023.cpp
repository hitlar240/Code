#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;

        int b[n];
        ll prod = 1;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            prod *= b[i];
        }
        vector <ll> v;
        if(2023%prod != 0)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            ll rem = 2023/prod;
            v.push_back(rem);
            for(int i=1; i<k; i++)
                v.push_back(1);
            
            for(int val : v)
                cout<<val<<" ";
            cout<<endl;
        }

    }

return 0;
}