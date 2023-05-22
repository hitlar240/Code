#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int a[m][n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<m;i++)
        for(int j=0,k=n-1;j<k;j++,k--)
        {
            int t=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=t;
        }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);

        printf("\n");
    }

return 0;
}