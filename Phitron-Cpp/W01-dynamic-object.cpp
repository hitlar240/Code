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
            // name = n;
            strcpy(name,n);
            roll = r;
            mark = m;
            grade = g;
        }
    };


int main()
{
//with constructor
    char nm1[101]="toma al";
    student *r1; //pointer var.
    r1 = new student(nm1,72,13.5,'A'); //dynamic object

// (->) dereference member operator
    // (*r1).name == r1->name

//without constructor
    // student *r1 = new student;         // Object (group name r1)
    // strcpy(r1->name,"tom al");
    // r1->name[3] = '+';
    // (*r1).roll = 72;       
    // r1->mark = 13.5;
    // r1->grade = 'A';

    // delete r1; // remove object from heap memory

    cout<<"Name: "<<(*r1).name<<endl;
    // cout<<"Name: "<<r1->name<<endl;
    cout<<"Roll: "<<r1->roll<<endl;
    cout<<"Mark: "<<r1->mark<<endl;
    cout<<"Grade: "<<r1->grade<<endl;
    

return 0;
}