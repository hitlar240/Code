#include<stdio.h>
#include<limits.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        int min=INT_MAX; //min = 10^6;

        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
            {
                int val=a[i]+a[j]+j-i;
                if(min>val)
                    min=val;
                // printf("i=%d j=%d v=%d m=%d\n",i,j,val,min);
            }
        printf("%d\n",min);
    }
}