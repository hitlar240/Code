#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    vector <int> v;
    // cout<<v.max_size()<<endl; // ~ (10^6)

    // cout<<v.capacity()<<endl;
    v.push_back(1); //doubled its capacity
    // cout<<v.capacity()<<endl; 
    v.push_back(2); //doubled its capacity
    // cout<<v.capacity()<<endl; 
    v.push_back(3); //doubled its capacity
    cout<<v.capacity()<<endl; 

    // v.resize(2); // resize v to 2 // O(k) k = difference between new and current size
    // v.resize(7); // resize v to 7 // O(k) k = difference between new and current size
    v.resize(7,3); // resize v to 7 and set other values to 3
    // v.clear(); // O(N) //clear the size of v don't delete values
    
    cout<<v.empty()<<endl; //check if size of v is 0 or not?
    
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); cout<<v[i++]<<" ");
    // cout<<v[2]<<endl; 


return 0;
}