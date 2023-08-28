// #include<bits/stdc++.h>
#include<iostream>
#include<sstream> //stringstream class
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    cout<<s<<endl;

    stringstream sw(s); //constructor
    // stringstream sw; //constructor
    // sw<<s;
    string word;

    int c=0;
    while(sw >> word) // while true
    {
        cout<<word<<endl;
        c++;
    }
    cout<<"count= "<<c<<endl;


return 0;
}