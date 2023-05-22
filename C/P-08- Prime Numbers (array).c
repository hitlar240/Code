#include<stdio.h>
#include<math.h> // sqrt()
//#include<stdlib.h> // exit(0)


int main()
{
    int a,b,t,n,m,i,j,p[1000],x;

        scanf("%d",&t);

while(t--)
{
    //printf("\na,b= ");
    scanf("%d %d",&a,&b);


    for (i=2;i<=b;i++)
        p[i]=1;

    //if(a[i]==1)

    for(i=2;i<=sqrt(b);i++)//half of the factors of n below sqrt(n)
     if(p[i]==1)
     {  //m=n/x;
        if(i<2) p[i]=0;

        for (j=2;j*i<=b;j++)
            {p[j*i]=0;
            //printf("\ni=%d j=%d x=%d",j*x-a,j,x);}
            }
     }

     //printf("\nPrimes: ");

     for(x=a;x<=b;x++)
        if(p[x]==1)
            printf("%d\n",x);
}

return 0;
}
