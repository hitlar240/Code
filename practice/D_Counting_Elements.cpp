#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; cin>>v[i++]);

    int c = 0;
    for(int i=0; i<n; i++)
    {
        for(auto it=v.begin(); it<v.end(); it++)
        {
            if(it == find(v.begin(),v.end(),v[i]+1))
                c++;
        }
    }

    cout<<c<<endl;

return 0;
}