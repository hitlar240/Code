//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count[26] = {0};
    // for(int i=0; i<26; count[i++]=0);
    for(int i=0; i<n; i++)
    {
        char ch;
        cin>>ch;
        count[ch-'a']++;
    }
    for(char c='a'; c<='z'; c++)
    {
        if(count[c-'a'] > 0)
        {
            // cout<<c<<"-"<<count[c-'a']<<endl;
            while(count[c-'a']--)
            // for(int i=1; i<=count[c-'a']; i++)
            cout<<c;
        }
    }
    cout<<endl;

return 0;
}