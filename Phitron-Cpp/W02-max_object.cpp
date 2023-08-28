//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class stu
{
    public:
    string name;
    float mark;

    // stu(string name, int roll)
    // {
    //     this->name = name;
    //     this->roll = roll;
    // }
    void print()
    {
        cout<<name<<endl;
        cout<<this->mark<<endl;
    }
};

int main()
{
    stu s[3];
    for(int i=0; i<3; i++)
    {
        getline(cin,s[i].name);
        cin>>s[i].mark;
        cin.ignore(); //ignore '\n' after mark
        // getchar();
        // s[i].print();
    }
    // for(int i=0; i<3; i++)
    // {  
    //     cout<<s[i].name<<endl;
    //     cout<<s[i].roll<<endl;
    // }

    stu max;
    // max.mark = -1;
    max.mark = 101;

    for(int i=0; i<3; i++)
    {
        // if(max.mark < s[i].mark) //max
        if(max.mark > s[i].mark) //min
            max = s[i]; //object
    }

    max.print();
    // cout<<max.name<<endl;
    // cout<<max.mark<<endl;


return 0;
}