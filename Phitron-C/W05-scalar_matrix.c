#include<stdio.h>

int main()
{
    // int r,c;
    // scanf("%d %d",&r, &c);

    // int a[r][c];

// // input
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
    
//     }
    

    int r=3, c=3;
    int a[3][3] = {1,0,0,0,1,0,0,0,1}; //primary diagonal
    int count = 1; // flag

// output
    if(r == c) // square matrix
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                printf("%d ",a[i][j]);

                if(i == j) //primary diagonal
                {
                    //if(a[i][j] != a[0][0]) count = 0; // scalar matrix
                    if(a[i][j] != 1) count = 0; // unit matrix
                    // continue;
                }
                else if( a[i][j] != 0) // not diagonal
                {
                    count = 0; //break;
                }
            }
            printf("\n");
            // if(count == 0)
            //     break;
        }
    }
    else 
        count =  0;

    if(count == 1)
        printf("scalar matrix\n");
    else
        printf("not scalar matrix!\n");

return 0;
}