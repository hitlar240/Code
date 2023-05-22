#include<stdio.h>

int main()
{
    //int array[block][row][column]
    //int survey[area][family][member]
    int a[3][2][2]={ {{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}} };


    for (int i=0;i<3;i++)//block
    {
        for (int j=0;j<2;j++)//row
        {
            for (int k=0;k<2;k++)//column
            {   //printf("\n");
                printf("%d ",a[i][j][k]);
            }//c
        printf("\n");

        }//r
    printf("\n\n");

    }//b


return 0;
}
