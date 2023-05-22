// 16.Symmetric Matrix
#include<stdio.h>
int main()
{
    int n,k,i,j,m[10][10];
    printf("M[nxn]\tn=");scanf("%d",&n);
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
//Symmetric?
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
            if(m[i][j]!=m[j][i]){printf("\nNot symmetric!!");exit(0);}
            }
    }

printf("\nSymmetric Matrix");
}
