#include<stdio.h>

int main()
{
    int a[2][3]={1,2,3,4,5,6}; // initialize array
        a[1][2]=0; // initialize element a[2nd row][3rd col] = 0;
    // int a[2][3]={1,2,3}; // other elements are 0
    // int a[2][3]={0}; // all elements are 0
    // int a[2][3]={{1,2,3},{4,5,6}}; // array[row][coloumn] = { {row1} , {row2} };
    // int a[][3]={{1,2,3},{4,5,6}}; //
    // int a[][3]={{1,2},{4}}; // other elements are 0

    printf("array size = %d\n",sizeof(a));

    int row = sizeof(a)/sizeof(a[0]); // number of rows = size of array / size of one row
    int col = sizeof(a[0])/sizeof(a[0][0]); // number of columns = size of one row / size of one element of that row

    for (int m=0; m < row; m++)//row
    {
        for (int n=0; n < col; n++)//column
        {
            printf("%d\t",a[m][n]);
        }//column
        printf("\n");
    }//row

return 0;
}
