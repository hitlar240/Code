#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int c[m+1];
    for(int i=1;i<=m;i++)
        c[i]=0;

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[a[i]]++;
    }

    for(int i=1;i<=m;i++)
        printf("%d\n",c[i]);

return 0;
}
