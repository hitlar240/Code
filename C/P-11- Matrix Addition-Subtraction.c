// 11.Matrix Addition-Subtraction
#include<stdio.h>
int main()
{
    int n,k,i,j,a[10][10],b[10][10],c[10][10];
//Input Dimension
    printf("Order[nxk]\tn,k=");scanf("%d,%d",&n,&k);
//Input A
    printf("\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<k;j++){printf("A[%d,%d]=",i+1,j+1);scanf("%d",&a[i][j]);}
    }
//Input B
    printf("\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<k;j++){printf("B[%d,%d]=",i+1,j+1);scanf("%d",&b[i][j]);}
    }
//Output A
    printf("\nMatrix A:\n");
    for (i=0;i<n;i++)
    {
    printf("\t");
        for(j=0;j<k;j++){printf("%d\t",a[i][j]);}
    printf("\n");
    }
//Output B
    printf("\nMatrix B:\n");
    for (i=0;i<n;i++)
    {
    printf("\t");
        for(j=0;j<k;j++){printf("%d\t",b[i][j]);}
    printf("\n");
    }
//Addition/Subtraction
    for (i=0;i<n;i++)
    {
        //for(j=0;j<k;j++){c[i][j]=a[i][j]+b[i][j];}
        for(j=0;j<k;j++){c[i][j]=a[i][j]-b[i][j];}
    }
//Output Result
    //printf("\nMatrix A+B:\n");
    printf("\nMatrix A-B:\n");
    for (i=0;i<n;i++)
    {
    printf("\t");
        for(j=0;j<k;j++){printf("%d\t",c[i][j]);}
    printf("\n");
    }
}
