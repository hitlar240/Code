//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    
    if('a'<=c && c<='z')
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    else if('A'<=c && c<='Z')
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    else if('0'<=c && c<='9')
        cout<<"IS DIGIT"<<endl;

return 0;
}