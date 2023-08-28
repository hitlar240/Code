#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<int> f(26,0);

    for(int i=0; i<s.size(); i++)
    {
        f[s[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(f[i] > 0)
            cout<<char(i+'a')<<" : "<<f[i]<<endl;
    }

return 0;
}