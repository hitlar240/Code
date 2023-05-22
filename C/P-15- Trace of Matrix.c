// 15.Trace of Matrix
#include<stdio.h>
int main()
{
    int n,k,i,j,m[10][10],t=0;
    printf("Order[nxn]\tn=");scanf("%d",&n);
//Input M
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++){printf("M[%d,%d]=",i+1,j+1);scanf("%d",&m[i][j]);}
    }
//Output M
    printf("\nMatrix:\n");
    for (i=0;i<n;i++)
    {
    printf("\t");
        for(j=0;j<n;j++){printf("%d\t",m[i][j]);}
    printf("\n");
    }
//Trace
    for (i=0;i<n;i++)
    {
    printf("\t");
        for(j=0;j<n;j++)
            {
            if (i==j){t=t+m[i][j];}
            }
    }

printf("\nTrace of M=\t%d",t);
}
