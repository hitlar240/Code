#include<stdio.h>

int main()
{
    int n; // size
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++) // input array
        scanf("%d",&a[i]);

    int x;
    scanf("%d",&x); // input x


    int ans=-1; // if x not found
    for(int i=0;i<n;i++)
        if(x==a[i])
        {
            ans=i; // 0-index of x

        //printf("%d\n",i);

            break; // if found break the loop

        // i is increasing before checking condition
        }

    //if(i==n) // if x doesn't exist
        //printf("-1\n");


    printf("%d\n",ans);


return 0;
}
