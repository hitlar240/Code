// 24.Floyd's Triangle
#include<stdio.h>
int main()
{
    int n,i,j,a=1;
    printf("N=\t"); scanf("%d",&n);

    printf("\nFloyd's Triangle:\n");
    for (i=1;i<=n;i++)
    {
        for (j=a;j<i+a;j++)
         {
         printf("\t%d",j);
         }
     a=j; printf("\n");
     }
}
