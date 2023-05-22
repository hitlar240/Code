#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,k,t,r,o[100],e[100];

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&r);

//    e[0]=1;
//    o[0]=1;o[1]=1;

    for(i=0;i<=r;i++)
    {
        if(i%2==0)
        {
            e[0]=1;e[i]=1;

            for(j=1;j<i;j++)
                e[j]=o[j-1]+o[j];

        for(k=0;k<=i;k++)
            {if(k==i){printf("%d\n",e[k]);break;}
            printf("%d ",e[k]);
        //printf("\n");
            }
        }


        else
        {
            o[0]=1;o[i]=1;

            for(j=1;j<i;j++)
                o[j]=e[j-1]+e[j];

        for(k=0;k<=i;k++)
            {if(k==i){printf("%d\n",o[k]);break;}
            printf("%d ",o[k]);
        //printf("\n");
            }
        }
    }
printf("\n");

}
return 0;
}
