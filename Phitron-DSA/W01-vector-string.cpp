#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    vector<string> v; //vector of size 0
    int n; cin>>n;
    cin.ignore(); //to ignore '\n' after input n
    for(int i=0; i<n; i++)
    {
        string s; // cin>>s; //without 'space's
        getline(cin,s); //with 'space's
        v.push_back(s);
    }
    for(string s : v)
    {
        cout<<s<<endl;
    }


    // int n;  cin>>n;
    // vector<string> v(n); //vector of size n
    // // for(int i=0; i<n; cin>>v[i++]); //without 'space's
    // cin.ignore(); //to ignore '\n' after input n
    // for(int i=0; i<n; getline(cin,v[i++])); //with 'space's
    // for(int i=0; i<n; cout<<v[i++]<<endl);

return 0;
}