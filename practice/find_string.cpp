//#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string s,x;
    getline(cin,s);
    cin>>x;

    int c = 0;
//count string x in s
    // int f = s.find(x);
    // while(f != -1)
    // {
    //     c++; 
    //     s.replace(f, x.size(), "*");
    //     f = s.find(x);
    // }
    // cout<<s<<endl;

// count word x in s
    stringstream sw;
    sw << s;
    string word;
    while(sw >> word)
    {
        if(word == x)
            c++; 
    }

    cout<<c<<endl;

return 0;
}