// #include<bits/stdc++.h>
#include<iostream>
#include<string.h> //C 
using namespace std;

class stu 
{
    public: // access specifier
    char name[100];
    // string name;
    int roll;
    float mark;
    char grade;
//constructor
    stu(char *n, int r, float m, char g)
    {
        strcpy(name, n);
        // name = n; //string
        roll = r;
        mark = m;
        grade = g;
    }
};

// stu fun() //static object
stu* fun() //dynamic object
{
    char n[]="tom";
    // stu s(n,72,75.3,'A'); //static object

    stu *s; //= new stu;
    s = new stu(n,72,75.3,'A'); //dynamic object

    return s;
}

int main()
{
    // char n[]="tom";
    // stu s(n,72,75.3,'A'); //static object

    // stu s; //declaration
    // strcpy(s.name, "tom");
    // s.roll = 72; // . member access operator
    // s.mark = 75.3;
    // s.grade = 'A';

    // stu *s; //= new stu;
    // s = new stu(n,72,75.3,'A'); //dynamic object
    // strcpy(s->name, "tom");
    // s->roll = 72; // . member access operator
    // s->mark = 75.3;
    // s->grade = 'A';
    
    // stu s = fun(); //static object
    stu *s = fun(); //dynamic object

    // cout<<s.name<<endl;
    // cout<<s.roll<<endl;
    // cout<<s.mark<<endl;
    // cout<<s.grade<<endl;
    
    cout<<s->name<<endl;
    cout<<s->roll<<endl;
    cout<<s->mark<<endl;
    cout<<s->grade<<endl;

    return 0;
}
