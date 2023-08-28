//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int c[26]={0};
        int b = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<26; j++)
            {
                if(s[i]-'A'==j)
                {
                    // cout<<s[i]<<" "<<c[j]<<endl;
                    if(c[j]==0)
                    {
                        c[j]++;
                        b+=2;
                    }
                    else //if(c[j]!=0)
                        b++;
                    break;
                }
            }
        }
        cout<<b<<endl;
    }

return 0;
}