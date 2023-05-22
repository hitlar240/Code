#include<stdio.h>

void prnt(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i==n)
            printf("%d\n",i);
        else
            printf("%d ",i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    prnt(n);

return 0;
}