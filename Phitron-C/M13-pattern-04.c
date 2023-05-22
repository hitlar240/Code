#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int k=1,s=n-1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=s; j++)
            printf(" ");


        for(int j=1; j<=k; j++)
            printf("*");
        
        printf("\n");
        
        if(i<n) //
        {
            k+=2;
            s--;
        }
        else
        {
            k-=2;
            s++;
        }
    }


    // int k=1,s=n-1;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=s; j++)
    //         printf(" ");


    //     for(int j=1; j<=k; j++)
    //         printf("*");
        
    //     printf("\n");
    //     k+=2;
    //     s--;
    // }

    // k=2*(n-1)-1;
    // s=1;
    // //for(int i=n; i>1; i--)
    // for(int i=1; i<n; i++)
    // {
    //     for(int j=1; j<=s; j++)
    //         printf(" ");


    //     for(int j=1; j<=k; j++)
    //         printf("*");
        
    //     printf("\n");
    //     k-=2;
    //     s++;
    // }

return 0;
}