#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int r = 0;
        bool flag = true;
        for(int i=1; i<n-1; i++)
        
            if(s[i]!='#' && s[i-1]=='.' && s[i+1]=='.')
            {
                r = 2; 
                flag = false;
                break;
            }

        if(flag)
            for(int i=0; i<n; i++)
                if(s[i]=='.') r++;

        cout<<r<<endl;
    }

return 0;
}