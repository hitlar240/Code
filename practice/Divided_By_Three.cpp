#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int l = s.size();

        vector <int> vt;
        for(int i=0; i<l; vt.push_back(s[i++]-'0'));


        int sum = 0;
        for(int v : vt)
        {
            if(v%3 != 0)
                sum += v;
            if(sum%3 == 0)
                sum = 0;
        }
        if(sum%3 == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

return 0;
}