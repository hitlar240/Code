#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int l = s.size();

        if(l==14 && s[0]=='+' && s[1]=='8' && s[2]=='8' && s[3]=='0' && s[4]=='1' && s[5]>='2' && s[5]<='9')
        {
            bool flag = true;
            for(int i=6; i<l; i++)
            {
                flag = flag && isdigit(s[i]);
            }
            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }

return 0;
}