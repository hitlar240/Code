//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count[26] = {0}; // initialization

    char c;
    while(n--)
    {
        cin>>c;
        count[c-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(count[i] != 0)
            for(int j=1; j<=count[i]; j++)
            {
                // char ch = i + 'a';
                // cout<<ch;
                cout<<char(i+'a');
            }   
    }
    cout<<endl;

return 0;
}