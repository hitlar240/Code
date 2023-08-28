#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream sw;
    sw << s;

    string word;
    
    sw>>word;
    reverse(word.begin(),word.end());
    cout<<word;

    while(sw>>word)
    {
        cout<<" "; //extra space???

        // for(char c : word) //forword
        // for(int i=word.size()-1; i>=0; i--)
        // {
        //     cout<<word[i];
        // }

        reverse(word.begin(), word.end());
        cout<<word;
    }


return 0;
}