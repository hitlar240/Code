#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,t,r;
   float a,b,c,area,s;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%f %f %f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area = %.3f\n",area);
}
return 0;
}
