#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,t,n,m;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d",&n,&m);

    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            {printf("%d",m);
            if(i==j) printf("\n");
            else printf(" ");}

    for(i=n-1;i>=1;i--)
        for(j=1;j<=i;j++)
            {printf("%d",m);
            if(i==j) printf("\n");
            else printf(" ");}

    printf("\n");
}
return 0;
}
