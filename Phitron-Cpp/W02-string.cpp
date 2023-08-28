//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    // char s[101] = "tomal";
    // strcpy(s,"tanvir");

    // cout<<s<<endl;
    // cout<<strcmp(s, "tanvir")<<endl; //string compare

//string is a dynamic array in C++
    string s = "tomal"; //class
    // cin>>s; //raeds up to 'space'
    s = "tanvir";

    cout<<s<<endl;
    if(s == "tanvir") //srting compare
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;

return 0;
}