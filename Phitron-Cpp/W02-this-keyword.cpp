//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class stu
{
    public: //access specifier
    string name;
    int roll;
    float mark;
    char grade;

    stu(string name, int roll, float mark, char grade) //constructor
    {
    // this - pointer of current object stu
        (*this).name = name; //dereference
        (*this).roll = roll;
        this->mark = mark; //dereference
        this->grade = grade;
        this->print();
    }
    void print() //class function
    {
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<mark<<endl;
        cout<<grade<<endl;
    }
};

int main()
{
    // stu s("tom", 72, 15.3, 'A'); //static object
    stu *s = new stu("tanvir", 240, 14.7, 'C'); //dynamic object

return 0;
}