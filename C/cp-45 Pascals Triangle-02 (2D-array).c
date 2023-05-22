#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,t,r;
   long long int p[51][51];

   scanf("%d",&t);

//initial conditions
    p[0][0]=1;
    p[1][0]=1;p[1][1]=1;

    for(i=2;i<=50;i++)//rth row: (r+1) elements
    {
        p[i][0]=1; //p[i][i]=1;

        for(j=1;j<i;j++)
            p[i][j]=p[i-1][j-1]+p[i-1][j];

        p[i][i]=1;
    }

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&r);


    for (i=0;i<=r;i++)//row
    {
        for (j=0;j<=i;j++)//column
        {   if(j==i)
                {printf("%lld\n",p[i][j]);break;}
            printf("%lld ",p[i][j]);
        }//column

        //printf("\n");
    }//row

if(t!=0)
    printf("\n");

}
return 0;
}
