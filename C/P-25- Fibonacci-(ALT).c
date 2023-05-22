// 25.Fibonacci series
#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,f=0;
//Input N
    printf("N=\t"); scanf("%d",&n);
//Output Sequence
    printf("Fibonacci Sequence:\t");
        for(i=1; i<=n; i++)
        {// Recurrence relation
            f=f+a;a=b;b=f;
            printf("%d\t",f);
        }
//Output N!
    printf("\n%dth Fibonacci Number = %d ",n,f);
    return 0;
}
