//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // getchar(); //avoid '\n' charecter
    cin.ignore(); //ignore a char

    string s;
    // cin>>s; // reads up to 'space'
    // cin.getline(s,100); // char s[100]
    getline(cin,s);

    cout<<n<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;

return 0;
}