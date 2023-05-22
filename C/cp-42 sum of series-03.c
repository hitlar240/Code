#include <stdio.h>
#include <math.h>

int main()
{
   int i,t,n;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    // as 0<=n<=50

    for (i=n;i>=0;i--)
        if(i==0)printf("1\n"); // for n=0
        else if(i==1)printf("2 + "); // for n=1
        else printf("2^%d + ",i);

}
return 0;
}
