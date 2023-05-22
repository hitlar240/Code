// 25.Fibonacci series
#include<stdio.h>
int main()
{
    int i,j,n,f[100];
    printf("N=\t"); scanf("%d",&n);
//Initial valies
    f[0]=0; f[1]=1;
//Recurrence Relation
    for (i=2; i<=n-1; i++)
        {
         f[i]=f[i-1]+f[i-2];
        }
//Output Sequence
    printf("Fibonacci Sequence:\t");
        for(j=0; j<n; j++)
        {
            printf("%d\t",f[j]);
        }

    printf("\n%dth Fibonacci Number = %d ",n,f[n-1]);
    return 0;
}
