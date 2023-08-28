//#include<bits/stdc++.h>
#include<iostream>
#include<sstream> //stringstream class
using namespace std;

void rev(stringstream & sw) // & - class reference 
{
    string word;
    if(sw>>word)
    {
        // cout<<word<<endl; //forword
        rev(sw);
        cout<<word<<endl; //reverse
    }
    // return;
}

int main()
{
    string s;
    getline(cin,s);

    stringstream sw(s);
    // stringstream sw;
    // sw<<s;
    // string word;

    // while(sw >> word)
    // {
    //     cout<<word<<endl;
    // }

    rev(sw);


return 0;
}