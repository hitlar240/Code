#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;scanf("%d",&a[i++]));

    for(int i=0;i<n;i++)
        if(a[i]==0)
            for(int j=0,k=i-1;j<k;j++,k--)
            {
                int t=a[j];
                    a[j]=a[k];
                    a[k]=t;
            }

    for(int i=0;i<n;printf("%d ",a[i++]));


return 0;
}