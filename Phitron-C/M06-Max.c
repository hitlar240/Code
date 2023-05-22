#include<stdio.h>
#include<limits.h> //INT_MIN/MAX...

int main()
{
    int t,n,max,min;

    //printf("%d %d\n",INT_MIN,INT_MAX);

    max=0; // 0<=n<=10^9
    //max=INT_MIN; // INT_MIN = -2^31

    //min=1000000000; // 0<=n<=10^9
    min=INT_MAX; // INT_MAX = +2^31-1

    scanf("%d",&t);

    //for(int i=1;i<=t;i++)
    while(t--)
    {
        scanf("%d",&n);
        if(max<n) max=n;

        if(min>n) min=n;
    }

    printf("%d\n",max);

    printf("%d\n",min);

return 0;
}
