#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int a[n]; 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]<a[j]) //decending order
            {
                int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
            }

    long long int s=0;
    for(int i=0;i<k;s+=a[i++]);

    printf("%lld\n",s);

return 0;
}