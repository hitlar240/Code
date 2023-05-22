#include<stdio.h>

int main()
{
    int n; // size of array
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>0)
            a[i]=1; // positive -> 1
        else if(a[i]<0)
            a[i]=2; // negative -> 2
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);


return 0;
}
