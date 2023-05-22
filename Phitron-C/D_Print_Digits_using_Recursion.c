#include<stdio.h>

void digit(int n)
{
    if(n == 0)
        return;

    int d = n%10;

    digit(n/10);

    printf("%d ",d);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        digit(n);
        if(n == 0)
            printf("0");

        printf("\n");
    }

return 0;
}