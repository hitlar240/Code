#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,k,a,b,c,t,r,n[100],m[100],N[200];

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&a);

    for(i=0;i<a;i++)
        scanf("%d",&n[i]);

    scanf("%d",&b);

    for(i=0;i<b;i++)
        scanf("%d",&m[i]);


    j=0;k=0;
    for(i=0;i<a+b;i++)
        {
            if(k>=b || j<a && n[j]<=m[k])
                {N[i]=n[j];j++;}//printf("N[%d]=%d\n",i,N[i]);}
            else if (j>=a || k<b && n[j]>m[k])
                {N[i]=m[k];k++;}//printf("N[%d]=%d\n",i,N[i]);}
        }


    for(i=0;i<a+b;i++)
    {
        if(i==a+b-1) {printf("%d\n",N[i]);break;}
        printf("%d ",N[i]);
    }

    //printf("\n");
}
return 0;
}
