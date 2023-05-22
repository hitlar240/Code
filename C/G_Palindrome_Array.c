#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int p=1;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            p=0;
            printf("NO\n");
            break;
        }    
    }

    if(p==1)
        printf("YES\n");


return 0;
}