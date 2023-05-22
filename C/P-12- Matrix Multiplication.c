// 12.Matrix Multiplication
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,s=0,a[10][10],b[10][10],m[10][10];

    printf("A[r1xc1]\tr1,c1=");scanf("%d,%d",&r1,&c1);
    printf("B[r2xc2]\tr2,c2=");scanf("%d,%d",&r2,&c2);

 if(c1==r2)
 {//Input A
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){printf("A[%d,%d]=",i+1,j+1);scanf("%d",&a[i][j]);}
    }
//Input B
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++){printf("B[%d,%d]=",i+1,j+1);scanf("%d",&b[i][j]);}
    }
//Multiply
    for (i=0;i<r1;i++)
    {
        for(k=0;k<c2;k++)
        {
            for(j=0;j<r2;j++) // c1=r2
            {
            s=s+a[i][j]*b[j][k];
            }//j
            m[i][k]=s;s=0;
        }//k
    }//i
//Output A
    printf("\nMatrix A:\n");
    for (i=0;i<r1;i++)
    {
    printf("\t");
        for(j=0;j<c1;j++){printf("%d\t",a[i][j]);}
    printf("\n");
    }
//Output B
    printf("\nMatrix B:\n");
    for (i=0;i<r2;i++)
    {
    printf("\t");
        for(j=0;j<c2;j++){printf("%d\t",b[i][j]);}
    printf("\n");
    }
//Output AxB
    printf("\nMatrix AxB:\n");
    for (i=0;i<r1;i++)
    {
    printf("\t");
        for(j=0;j<c2;j++){printf("%d\t",m[i][j]);}
    printf("\n");
    }
 }//if

 else {printf("Not Multipliable!!");}

}//main
