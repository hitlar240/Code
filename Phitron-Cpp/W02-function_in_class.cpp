//#include<bits/stdc++.h>
#include<iostream>
// #include<string>
using namespace std;

class student //class
{
    public:
    string name;
    int roll;
    float mark1;
    float mark2;
    char grade;

    student(string n, int r, float m1, float m2, char g) //constructor
    {
        name = n;
        roll = r;
        mark1 = m1;
        mark2 = m2;
        grade = g;
    }
    void print() //class function
    {
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<mark1<<endl;
        cout<<mark2<<endl;
        cout<<grade<<endl;
        // cout<<total()<<endl;
    }
    float total() //no parameter
    {
        return mark1 + mark2; //scope inside the class
    }
};

int main()
{
    // student stu("tanvir", 72, 13.5, 17.6, 'A'); //static object 
    student *stu = new student("tom", 240, 14.7, 12.2, 'B'); //dynamic object

//call class functon
    // stu.print(); //static object
    stu->print(); //dynamic object

    // cout<<stu.total()<<endl;
    cout<<stu->total()<<endl;

return 0;
}