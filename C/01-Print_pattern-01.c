#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char hmm;
    scanf("%c",&hmm); // to avoid '\n' after input n
    
    char c;
    scanf("%c",&c);


    int k=1,s=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=k; j++)
        {
            printf("%c",c);
        }

        //printf(" %d",i);
        printf("\n");
        k++;
        s--;
    }

return 0;
}