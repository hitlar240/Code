#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int min=INT_MAX,max=INT_MIN; //initialization
    //int min=100000,max=-100000; // -10^5 <= a[i] <= +10^5
    int imin,imax;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
        {
            min=a[i];
            imin=i;
        }

        if(a[i]>max)
        {
            max=a[i];
            imax=i;
        }

    }
//replace min-max
    a[imax]=min;
    a[imin]=max;

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

return 0;
}
