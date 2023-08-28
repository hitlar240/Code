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
    // this - pointer of object stu
        (*this).name = name; //dereference
        (*this).roll = roll;
        this->mark = mark; //dereference
        this->grade = grade;
        // this->print();
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
    // stu s1("tanvir", 72, 14.7, 'C'); //static object
    // stu s2("tom", 240, 13.2, 'B'); //static object
    
    // s2 = s1; // object s2 = object s1

    // s1.print();
    // s2.print();
    


    stu *s1 = new stu("tanvir", 72, 14.7, 'C'); //dynamic object
    
    delete s1; //delete object s1 from heap memory
    
    stu *s2 = new stu("tom", 240, 13.2, 'B'); //dynamic object
    
    // s2 = s1; // pointer of s2 = pointer of s1
    *s2 = *s1; // object s2 = object s1

    s1->print();
    // s2->print();

return 0;
}