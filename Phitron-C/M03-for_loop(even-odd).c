#include<stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf("i=%d\t",i);

        if(i%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
return 0;
}
