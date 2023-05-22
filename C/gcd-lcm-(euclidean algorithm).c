#include<stdio.h>
int main()
{
    int a,b,g,l,i,t,x,y;
    printf("a,b=");scanf("%d,%d",&a,&b);

    if (a<b){x=b;y=a;}
    else {x=a;y=b;}

    for (i=1;;i++)
    {
        t=y;
        y=x%y;
        x=t;
        if (y==0)
        {g=x;
        break;}
    }


    l=a*b/g;
    printf("gcd=%d\nlcm=%d",g,l);
}
