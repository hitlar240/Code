#include<stdio.h>

int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
//input array
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//sorting array
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
            }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n");

    for(int i=0;i<q;i++)
    {
        int x; //search for x
        scanf("%d",&x);
        printf("x=%d\n",x);
        
        int f=0; // initialization
        int N=n/2,u=n-1,l=0;

        while(1)
        {

            if(x<a[0] || x>a[n-1]) //not in range
                break;
            else if(x==a[N]) //found
            {
                f=1;
                printf("N=%d\n",N);
                break;
            } 
            else if(x>a[N] && x<=a[u])
            {
                printf("l=%d u=%d\n",l,u);
                l=N-1;
                N=l+(u-N)/2;
            }
            else if(x>=a[l] && x<a[N]) // 
            {
                printf("l=%d u=%d\n",l,u);
                N=N/2;
                u=N+1;
                
            }
            else //not foound
                break;
        }


        if(f==1)
            printf("found\n");
        else
            printf("not found\n");

    }
    



    



//linear search:

    // while(q--)
    // {
    //     int x;
    //     scanf("%d",&x);

    //     int f=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(x==a[i])
    //         {
    //             f=1; break;
    //         }
    //     }
        
    //     if(f==1)
    //         printf("found\n");
    //     else
    //         printf("not found\n");
    // }

    

return 0;
}