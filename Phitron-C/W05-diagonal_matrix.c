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
    //int a[3][3] = {1,0,0,0,2,0,0,0,3}; //primary diagonal
    int a[3][3] = {0,0,1,0,2,0,3,0,0}; //secondary diagonal
    int count = 1; // flag

// output
    if(r == c) // square matrix
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                //if(i == j) continue; //primary diagonal
                if(i+j == r-1) continue; //secondary diagonal

                if( a[i][j] != 0) // not diagonal
                {
                    count = 0; //break;
                }
            }
            // if(count == 0)
            //     break;
        }
    }
    else 
        count =  0;

    if(count == 1)
        printf("deagonal matrix\n");
    else
        printf("not diagonal matrix!\n");

return 0;
}