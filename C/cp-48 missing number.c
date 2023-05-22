#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,s,n,m,t,a[100000];

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    //s=0;j=n;
    for(i=1,s=0,j=n;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
        j+=i;//j=j+i;
        //printf("j=%d  s=%d = ",j,s);
    }

    //printf("%d - %d = ",j,s);

    printf("%d\n",j-s);
}
return 0;
}
