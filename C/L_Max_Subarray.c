#include<stdio.h>
#include<limits.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {

        int n; // array size
        scanf("%d",&n);

//input array
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
//finding max
        int l=1;
        while(l<=n)
        {
//max of each sub-aray
            for(int i=0;i<n;i++)
            {
                if(i+l>n) break;
                
                int max=INT_MIN;
                for(int j=i;j<i+l;j++) //taking contiguous l elements
                {
                    //max
                    if(max<a[j])
                        max=a[j];    
                }

                printf("%d ",max);
            }

            l++;
        }

        printf("\n");

    }

return 0;
}