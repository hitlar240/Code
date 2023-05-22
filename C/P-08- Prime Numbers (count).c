#include<stdio.h>
#include<math.h>

int main()
{
    int a=1,b=10000,c=0,i,j;

    printf("\na,b= ");
    scanf("%d,%d",&a,&b);

    for(i=a;i<=b;i++)
        {
        for(j=1;j<=i;j++)
            if(i%j==0) c++;

        if(c==2)
            printf("\t%d",i);
        c=0;
        }

return 0;
}
