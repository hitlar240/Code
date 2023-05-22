#include<stdio.h>

int main()
{
    // int r,c;
    // scanf("%d %d",&r, &c);

    // int a[r][c];

// input
    // for(int i=0; i<r; i++) 
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         scanf("%d",&a[i][j]);
    //     }
    
    // }
    

    int r=3, c=3;
    int a[3][3] = {1,2,3,4,5,6,7,8,9};

// output
    for(int i=0; i<r; i++)
    {
            printf("%d\n",a[i][1]); // 2nd column
    }
    
    for(int j=0; j<c; j++)
    {
            printf("%d ",a[0][j]); // 1st row
    }

return 0;
}