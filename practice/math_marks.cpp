//#include<bits/stdc++.h>
#include<iostream>
#include<string.h> // C header-file
using namespace std;

class student
{
    public:
    char name[100];
	int roll;
	char section;
	float math_marks;
	char cls;

    student(char *n, int r, char s, float m, char c)
    {
        // name = n;
        strcpy(name,n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    char n1[] = "tom";
    student s1(n1,72,'C',75.87,9);
    char n2[12] = "al";
    student s2(n2,25,'B',99.09,9);
    char n3[101] = "tanvir";
    student s3(n3,240,'A',82.43,9);

    // float mx = max(s1.math_marks, s2.math_marks);
    // mx = max(mx, s3.math_marks);

    // if(mx == s1.math_marks)
    //     cout<<s1.name<<endl;
    // else if(mx == s2.math_marks)
    //     cout<<s2.name<<endl;
    // else //if(mx == s1.math_marks)
    //     cout<<s3.name<<endl;

    // cout<<mx<<endl;


    if(s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks)
        cout<<s1.name<<endl<<s1.math_marks<<endl;
    else if(s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks)
        cout<<s2.name<<endl<<s2.math_marks<<endl;
    else //if(s3.math_marks > s2.math_marks && s3.math_marks > s1.math_marks)
        cout<<s3.name<<endl<<s3.math_marks<<endl;
    

return 0;
}