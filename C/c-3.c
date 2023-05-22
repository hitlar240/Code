#include<stdio.h>
main()
{
int a,b,c,d,e,f,g;
printf("Input a and b= "); // Input a and b=a(space)b
scanf("%d%d",&a,&b);
//hide this line
/*
printf("Input a=");
scanf("%d",&a);
printf("Input b=");
scanf("%d",&b);
*/
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("\n\t sum of %d and %d= %d",a,b,c);
printf("\n subtraction= %d",d);
printf("\n multiplication= %d",e);
printf("\n division= %d",f);
printf("\n mod= %d \n",g );
return 0;
}
