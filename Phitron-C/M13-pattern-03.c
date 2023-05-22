#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //int k=1;
    int k=n; //reverse
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        //for(int j=1; j<=i; j++)
        //for(int j=n-i+1; j>=1; j--) //reverse
            printf("%d ",j);

        printf("\n");
        //k++;
        k--; //reverse
    }

return 0;
}