#include<stdio.h>
#include<string.h>//strlen()

int main()
{
    int n;
    scanf("%d",&n);

    int k=n,s=0;

    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");

        if(i<n)
        {
            k--;
            s+=2;
        }
        else
        {
            k++;
            s-=2;
        }
    }







    // char s[100];
    // //gets(s);
    // int a,b,n=10;



    //     for (a=0,b=n;b>0; a++,b--)
    //     {
    //         for(int i=0;i<b;i++)
    //             printf("c");

    //         for (int i=0;i<2*a;i++)
    //             printf(" ");

    //         for(int i=0;i<b;i++)
    //             printf("c");



    //     printf("\n");
    //     }

    //     for (a=1,b=n-1;b>0; a++,b--)
    //     {


    //         for (int i=0;i<=a;i++)
    //             printf("c");

    //         for(int i=2;i<2*b;i++)
    //             printf(" ");

    //         for (int i=0;i<=a;i++)
    //             printf("c");



    //     printf("\n");
    //     }


return 0;
}
