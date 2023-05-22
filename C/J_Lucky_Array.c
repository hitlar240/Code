#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf( "%d",&a[i]);
    }

    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }

    int c=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
            c++;
    }

    if(c%2==0)
        printf("Unlucky\n");
    else
        printf("Lucky\n");

return 0;
}