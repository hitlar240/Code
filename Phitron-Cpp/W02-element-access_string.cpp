//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
// Element access
    // s.front() -> access the first element of the string.
    // S[i] -> access the ith index of the string.
    // s.at(i) -> access the ith index of the string.
    // s.back() -> access the last element of the string.

    string s;
    cin>>s;
    cout<<s<<endl;

    cout<<s[0]<<endl;
    cout<<s.front()<<endl;

    cout<<s[2]<<endl;
    cout<<s.at(2)<<endl;

    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;

return 0;
}