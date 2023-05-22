//#include<bits/stdc++.h>
#include<iostream>
#include<string.h> // C header file
using namespace std;

int main()
{
    char s[101];
    // cin>>s; // reads up to 'space'
    // fgets(s, 101, stdin); // includes '\n'
    cin.getline(s,101); // excludes '\n'

    cout<<s<<endl;

    cout<<strlen(s);

return 0;
}