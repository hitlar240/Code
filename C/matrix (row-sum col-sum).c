#include<stdio.h>

int main()
{
    int i,j,r=0,c=0,n[5][5];
    //int n[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};

//input:
    for (i=0;i<5;i++)//row
    {
        for (j=0;j<5;j++)//column
        {
            printf("\nn[%d][%d]= ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }//column
    }//row

//output:
    for (i=0;i<5;i++)//row
    {
        for (j=0;j<5;j++)//column
        {
           r=r+n[i][j];
            c=c+n[j][i];
        }//column
        printf("\nSum row %d = %d",i+1,r);
        printf("\nSum col %d = %d",i+1,c);
        r=0;c=0;
    }//row
return 0;
}
