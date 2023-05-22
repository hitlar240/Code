#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //int k=1,s=n-1;
    int k=2*n-1,s=0; //reverse
    for(int i=1; i<=n; i++)
    {
        //for(int j=1; j<=s; j++)
        //for(int j=1; j<=n-i; j++)
        for(int j=i-1; j>=1; j--) //reverse
        {    
            printf("  ");
        }

        //for(int j=1; j<=k; j++)
        //for(int j=1; j<=2*i-1; j++)
        for(int j=2*(n-i)+1; j>=1; j--) //reverse
        {    
            printf("* ");
        }

        printf("\n");
        // k+=2;
        // s--;
        
        k-=2; //reverse
        s++;
    }

return 0;
}