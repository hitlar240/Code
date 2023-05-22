// 29.Determinant
#include<stdio.h>
int main()
{
    int D,i,j,m[3][3];
//Input M
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++){printf("M[%d,%d]=",i+1,j+1);scanf("%d",&m[i][j]);}
    }
//Output M
    printf("\nDeterminant of\n");
    for (i=0;i<3;i++)
    {
    printf("\t");
        for(j=0;j<3;j++){printf("%d\t",m[i][j]);}
    printf("\n");
    }
//calculate Determinant
    D=m[0][0]*(m[1][1]*m[2][2]-m[2][1]*m[1][2])-m[0][1]*(m[1][0]*m[2][2]-m[2][0]*m[1][2])+m[0][2]*(m[1][0]*m[2][1]-m[2][0]*m[1][1]);
//Output Result
    printf("is =%d",D);
}
