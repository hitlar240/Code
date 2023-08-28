//#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // bool f = false;
    int f=0, c=0;

    // for(int i=0; s[i]!='\0'; i++)
    for(char ch : s) //range based for loop
    {
        if(ch==' ' || ch=='.'|| ch==','|| ch=='?'|| ch=='!')
            f=0;
        else if(f == 1)
            continue;
        else //if(isalpha(ch)) // 0 false | otherwise true
        {
            f=1;
            c++;
        }
    }

    cout<<c<<endl;

return 0;
}