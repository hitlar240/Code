#include<stdio.h>

int main()
{
printf("%d\n",pow(4,2));
    printf("\nax^2+bx+c=0");
    int a,b,c,x1,x2;
    printf("\na=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    x1=-b+ sqrt(pow(b,2)-4*a*c)/(2*a);
    x2=-b- sqrt(pow(b,2)-4*a*c)/(2*a);
    printf("\nx1=%d",x1);
    printf("\nx2=%d",x2);
    return 0;
}