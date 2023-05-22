// 01.Quadratic Equation & its Roots
#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c,d;
    float x1,x2,r,i;
//Input a,b,c
    printf("ax^2+bx+c=0\n");
    printf("\na=");scanf("%d",&a);
    printf("\nb=");scanf("%d",&b);
    printf("\nc=");scanf("%d",&c);
//Determinant
    d=pow(b,2)-4*a*c;
//Calculation
    if(a==0) {printf("Not a quadratic equation!!");}
    else if (d>=0)
        {
        printf("\nReal Roots:");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\n\tx1=%f",x1);
        printf("\n\tx2=%f",x2);
        }
    else
        {
        printf("\nComplex Roots:");
        r=(float)-b/(2*a);
        i=sqrt(abs(pow(b,2)-4*a*c))/(2*a);
        printf("\n\tc1=%f + i%f",r,i);
        printf("\n\tc2=%f - i%f",r,i);
        }
    return 0;
}

