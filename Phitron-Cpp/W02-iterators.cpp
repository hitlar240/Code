//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
// Iterators
    // s.begin() -> pointer to the first element.
    // s.end() -> pointer to the next element after the last element of the string.

    string s = "tomal";

    for(int i=0; i<s.size(); cout<<s[i++]<<" "); // iterator i
    cout<<endl;

    // cout<<s.begin()<<endl; // access specifier private
    // cout<<s.end()<<endl; // access specifier private
    
    // cout<<*s.begin()<<endl; // first element - t
    // cout<<*s.end()<<endl; // next after last - null
    // cout<<*(s.end()-1)<<endl; //last element - l

    // string:: iterator it; // pointer iterator it
    // for(it=s.begin(); it<s.end(); cout<<*it++<<" ");

    // for(string:: iterator it=s.begin(); it<s.end(); it++) // pointer iterator it
    for(auto it=s.begin(); it<s.end(); it++) // auto detect iterator it
    {
        cout<<*it<<" ";
    }
    cout<<endl;

return 0;
}