#include<stdio.h>
#include<string.h>//strlen()

int main()
{
    int n;
    scanf("%d",&n);

    int k=2*n-1,s=0;

    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");

        if(i<n) //double cone shape
        {
            k-=2;
            s++;
        }
        else
        {
            k+=2;
            s--;
        }
    }







    // char s[100];
    // //gets(s);
    // int a,b,n=11;



    //     for (a=0,b=n; a<n; a+=2,b-=2)
    //     {
    //         for (int i=0;i<a/2;i++)
    //             printf(" ");

    //         for(int i=0;i<b;i++)
    //             printf("c");

    //         for (int i=0;i<a/2;i++)
    //             printf(" ");
    //     printf("\n");
    //     }

    //     for (a=2,b=n-1; a<n; a+=2,b-=2)
    //     {
    //         for (int i=1;i<b/2;i++)
    //             printf(" ");

    //         for(int i=0;i<=a;i++)
    //             printf("c");

    //         for (int i=0;i<=b/2;i++)
    //             printf(" ");
    //     printf("\n");
    //     }

return 0;
}
