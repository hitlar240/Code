#include<stdio.h>

int main()
{
    int t; //test case
    scanf("%d",&t);

    while(t--)
    {
        int n; //array size
        scanf("%d",&n);
    // input array
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        
    // count non-decreasing sub-array
        int l=0,c=0;
        while(l<n)
         {   
            for(int i=0;i<n;i++)
                if(i+l<n)
                { 
                    // printf("l=%d ",l+1);
                    int inc=0;
                    for(int j=i;j<i+l;j++)
                    {   
                        // printf("%d<%d? ",a[j],a[j+1]);
                        if(a[j]>a[j+1])
                        {
                            // printf("a=%d br ",a[j]);
                            inc=-1;
                            break;
                        }
                    }
    
                    if(inc!=-1)
                        c++;
                    // printf("c=%d\n",c);
                }

            l++;
        }

        printf("%d\n",c);

    }

return 0;
}