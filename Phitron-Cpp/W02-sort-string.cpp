//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm> //sort()
using namespace std;

int main()
{
    // char s[100];
    // cin>>s;
    // sort(s,s+n);


    string s;
    cin>>s;
// sort(starting pointer, end+1 pointer);
    sort(s.begin(),s.end());

    cout<<s<<endl;


return 0;
}