#include <stdio.h>
#include <math.h>

int main()
{
   int i,j,t,r,p[100][101];

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&r);

    p[0][0]=1;
    p[1][0]=1;p[1][1]=1;

    for(i=2;i<=r;i++)//rth row: (r+1) elements
    {
        p[i][0]=1; //p[i][r]=1;

        for(j=1;j<r;j++)
            p[i][j]=p[i-1][j-1]+p[i-1][j];

        p[i][r]=1;
    }

// to much garbages

    for (i=0;i<=r;i++)//row
    {
        for (j=0;j<=i;j++)//column
        {   if(j==i)
                {printf("%d\n",p[i][j]);break;}
            printf("%d ",p[i][j]);
        }//column

        //printf("\n");
    }//row

if(t!=0) printf("\n");

}
return 0;
}
