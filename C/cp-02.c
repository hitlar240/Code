#include<stdio.h>
#include<string.h>

int main()
{
    int T,i;

    char n[100];

    //printf("\nT= ");
    scanf("%d",&T);


    for(i=0;i<T;i++)
    {
        scanf("%s",n);
    int s=strlen(n);
    if((n[s-1]-'0')%2==0)
        printf("even\n");
    else printf("odd\n");
    }

return 0;
}
