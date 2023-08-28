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
    char nm1[101]="toma al";
    // student r1("tom",72,13.5,'A');
    student r1(nm1,72,13.5,'A');

    cout<<"Name: "<<r1.name<<endl;
    cout<<"Roll: "<<r1.roll<<endl;
    cout<<"Mark: "<<r1.mark<<endl;
    cout<<"Grade: "<<r1.grade<<endl;
    
    char nm2[101]="tanvir";
    // student r2("tanvir",240,3.5,'C');
    student r2(nm2,240,3.5,'C');

    cout<<"Name: "<<r2.name<<endl;
    cout<<"Roll: "<<r2.roll<<endl;
    cout<<"Mark: "<<r2.mark<<endl;
    cout<<"Grade: "<<r2.grade<<endl;

return 0;
}