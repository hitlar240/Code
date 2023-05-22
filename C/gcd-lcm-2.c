#include<stdio.h>
int main()
{
    int i,a,b,g,l;
    printf("a,b=");scanf("%d,%d",&a,&b);
    //for (i=1;i<=a;i++)
    for(i=a;i>=1;i--) //a<b
        if (a%i==0 && b%i==0)
        {g=i;
        break;}

    l=a*b/g;
    printf("gcd=%d\nlcm=%d",g,l);
}
