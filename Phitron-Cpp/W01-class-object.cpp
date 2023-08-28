//#include<bits/stdc++.h>
#include<iostream>
#include<string.h> //strcpy()
using namespace std;

// Class 
// -> user-defined data type 
// -> "blueprint" for creating objects

    class student           // Class
    {
        public:             // Access specifier
            char name[101]; // Attribute
            int roll;       // Attribute
            float mark;     // Attribute
            char grade;     // Attribute
    };


int main()
{
    // student r1 = {"tom al",72,13.5,'A'};

    student r1;         // Object (group name r1)
    strcpy(r1.name,"tom al");
    r1.name[3] = '+';
    r1.roll = 72;       // (.) member access operator
    r1. mark = 73.5;
    r1.grade = 'A';

    cout<<"Name: "<<r1.name<<endl;
    cout<<"Roll: "<<r1.roll<<endl;
    cout<<"Mark: "<<r1.mark<<endl;
    cout<<"Grade: "<<r1.grade<<endl;


return 0;
}