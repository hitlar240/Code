// 08.Prime Numbers in Between
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,j;

    printf("From:");scanf("%d",&a);
    printf("To:");scanf("%d",&b);

    printf("Prime numbers between %d and %d:",a,b);

    if(a<2) a=2;

l1: for (i=a;i<=b;i++)
    {
        if (i!=2 && i%2==0) continue;

    l2: for(j=3;j<=sqrt(i);j+=2)//at least one factor <= sqrt(n)
            if(i%j==0) {a=i+2;goto l1;} //l2


    printf("\t%d",i);

    }//l1

return 0;
}
