#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        int l = str.length();
        int t=0, f=0;
        for(int i=0; i<l; i++)
        {
            if(str[i]-'0') t++;
            else f++;
        }
        cout<<abs(t-f)<<endl;
    }

return 0;
}