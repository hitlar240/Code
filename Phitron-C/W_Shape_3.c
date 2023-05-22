#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int k=1, s=n-1;
    for(int i=1; i<=2*n; i++)
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

        if(i<n)
        {
            k+=2;
            s--;
        }
        //i=n repeat the same as for n-1
        else if(i>n)
        {
            k-=2;
            s++;
        }
    }

return 0;
}