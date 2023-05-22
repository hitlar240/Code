//Mark Details
#include<stdio.h>
int main()
{
    int r;
    float t1,t2,t3,b1,b2,a,m,T;
//Input Marks
    printf("Roll:");scanf("%d",&r);
    printf("Attendance Mark:");scanf("%f",&a);
    printf("1st Tutorial Mark:");scanf("\t%f",&t1);
    printf("2nd Tutorial Mark:");scanf("\t%f",&t2);
    printf("3rd Tutorial Mark:");scanf("\t%f",&t3);
//Best 2 Tutorials
    if(t1>=t2)
    {
        if(t1>=t3 && t2>=t3) {b1=t1;b2=t2;}
        else if (t1>=t3 && t2<=t3) {b1=t1;b2=t3;}
        else {b1=t3;b2=t1;}
    }
    if(t2>=t1)
    {
        if(t2>=t3 && t1>=t3) {b1=t2;b2=t1;}
        else if (t2>=t3 && t1<=t3) {b1=t2;b2=t3;}
        else {b1=t3;b2=t2;}
    }
//Average of Best 2
    m=(b1+b2)/2;
//Total
    T=a+m;
//Output Details
    printf("\nDetails\nRoll:%d\nAttendance Mark:%f\nTutorial Marks:%f\t%f\t%f\nAverage of Best Two=%f\nTotal Marks=%f",r,a,t1,t2,t3,m,T);

    return 0;
}
