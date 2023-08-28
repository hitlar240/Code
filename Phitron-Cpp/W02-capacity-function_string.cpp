//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
// Capacity
    // s.size() -> returns the size of the string.
    // s.max_size() -> returns the maximum size that string can hold.
    // s.capacity() -> returns current available capacity of the string.
    // s.resize() -> change the size of the string.
    // s.clear() -> clear the string.
    // s.empty() -> return true/false if the string is empty.

    string s;
    // cout<<s.capacity()<<endl; //initial capacity 15
    cout<<s.max_size()<<endl; //maximum length ~(10^6)

    cin>>s; //reads up to 'space'
    cout<<s<<endl;

    cout<<s.size()<<endl; //length of string
    cout<<s.capacity()<<endl; // increase dynamically
    
    
    // s.resize(100); //increase the size
    s.resize(100,'-'); //increase the size and set other char to '-'
    // s.resize(3); //decriese the size
    cout<<s.capacity()<<endl; // increase dynamically
    cout<<s<<endl;

    s.clear(); //clear the string
    cout<<s.empty()<<endl; //check if empty or not?

return 0;
}