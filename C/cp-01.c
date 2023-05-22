#include<stdio.h>

int main()
{
    int T;

    //printf("\nT= ");
    scanf("%d",&T);

    int n[T],i;

    for(i=0;i<T;i++)
        scanf("%d",&n[i]);

    for(i=0;i<T;i++)
        if(n[i]%2==0)
            printf("even\n");
        else printf("odd\n");


return 0;
}
