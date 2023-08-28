//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class stu
{
    public:
    string name;
    int roll;

//no constructor for object array

    void print()
    {
        cout<<name<<endl;
        cout<<this->roll<<endl;
    }
};

int main()
{
    stu s[3];
    for(int i=0; i<3; i++)
    {
        getline(cin,s[i].name);
        cin>>s[i].roll;
        cin.ignore();
        // getchar();
        s[i].print();
    }
    // for(int i=0; i<3; i++)
    // {  
    //     cout<<s[i].name<<endl;
    //     cout<<s[i].roll<<endl;
    // }



return 0;
}