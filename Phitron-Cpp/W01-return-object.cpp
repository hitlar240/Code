//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

class student           // Class
    {
        public:             // Access specifier
            // string name;
            char name[101]; // Attribute
            int roll;       // Attribute
            float mark;     // Attribute
            char grade;     // Attribute

    //constructor
        // student(string n, int r, float m, char g)
        student(char * n, int r, float m, char g)
        {
            cout<<"------------"<<endl;
            // name = n; //string
            strcpy(name,n);
            roll = r;
            mark = m;
            grade = g;
        }
    };

//(RVO) Return Value Optimaization
// "student" is a user defined datatype

// student fun() // return object (static)
student* fun() //return object pointer (dynamic object)
{
    char nm[101]="tomal";
    // student r(nm,72,13.75,'A'); //static object
    
    student *r = new student(nm,72,13.75,'A'); //dynamic object

    return r; //return a copy of this object/object pointer
}

int main()
{
    // student r1 = fun(); //static object
    student *r1 = fun(); //dynamic object

// //static
//     cout<<"Name: "<<r1.name<<endl;
//     cout<<"Roll: "<<r1.roll<<endl;
//     cout<<"Mark: "<<r1.mark<<endl;
//     cout<<"Grade: "<<r1.grade<<endl;

//dynamic  
    cout<<"Name: "<<r1->name<<endl;
    cout<<"Roll: "<<r1->roll<<endl;
    cout<<"Mark: "<<r1->mark<<endl;
    cout<<"Grade: "<<r1->grade<<endl;
    
    
return 0;
}