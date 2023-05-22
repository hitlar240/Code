#include<stdio.h>

int main()
{
//     int r,c;
//     scanf("%d %d",&r, &c);

//     int a[r][c];

// // input
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
    
//     }
    

    int r=3, c=3;
    int a[3][3] = {0,0,0,0,0,0,1,0,0};
    int count = 0;
    //int count = 1;

// output
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);

            // if(a[i][j] == 0)
            // count++;
            
        //     if(a[i][j] != 0)
        //     {
        //         count = 0; break;
        //     }
        }
        printf("\n");

        // if(count == 0)
        // break;
    }

    if(count == r*c)
    //if(count == 1)
        printf("Null matrix\n");
    else
        printf("not Null matrix!\n");

return 0;
}