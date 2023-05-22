#include<stdio.h>
#include<string.h>

// struct exam
//     {
//         char name[26];
//         int roll;
//         double mark;
//         char grade;
//     };


int main()
{
    typedef int roll;
    typedef double mark;

    roll rl1=1, rl2=2, rl3=3;
    mark m1=10.23, m2=23.54, m3=89.11;

    printf("roll %d = %lf\n",rl1,m1);
    printf("roll %d = %lf\n",rl2,m2);
    printf("roll %d = %lf\n",rl3,m3);

    struct exam
    {
        char name[26];
        int roll;
        double mark;
        char grade;
    };
    
    struct exam r1={"tom al",72,15.72,'B'};
    r1.name[3]='+'; //change character in name
    r1.mark-=2; //update mark

    printf("Name=%s\nRoll=%d\nMark=%lf\nGrade=%c\n\n",r1.name,r1.roll,r1.mark,r1.grade);

    struct exam r2;
    strcpy( r2.name,"tan(pi/2)");
    r2.roll=25;
    r2.mark=19.25;
    r2.grade='A';

    printf("Name=%s\nRoll=%d\nMark=%lf\nGrade=%c\n\n",r2.name,r2.roll,r2.mark,r2.grade);


return 0;
}