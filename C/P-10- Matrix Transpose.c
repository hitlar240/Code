// 10.Matrix & its Transpose
#include<stdio.h>
int main()
{
    int n,k,i,j,m[10][10];
//Input dimension
    printf("M[nxk]\tn,k=");scanf("%d,%d",&n,&k);
//Input M
    for (i=0;i<n;i++)
    {
        for(j=0;j<k;j++){printf("M[%d,%d]=",i+1,j+1);scanf("%d",&m[i][j]);}
    }
//Output M
    printf("\nMatrix:\n");
    for (i=0;i<n;i++)
    {
    printf("\t");
        for(j=0;j<k;j++){printf("%d\t",m[i][j]);}
    printf("\n");
    }
//Output Transpose
    printf("\nTranspose Matrix:\n");
    for (j=0;j<k;j++)
    {
    printf("\t");
        for(i=0;i<n;i++){printf("%d\t",m[i][j]);}
    printf("\n");
    }
}
