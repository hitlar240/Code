#include <stdio.h>
#include <math.h>
//long long int pf[10000];

int pr(long long int n);

int main()
{
    int t;
    long long int n;

   scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    scanf("%lld",&n);

    int p=pr(n);

    if(p==1)
        printf("%lld is a prime\n",n);
    else
        printf("%lld is not a prime\n",n);

}

return 0;
}









int pr(long long int n)
{
    long long int sn,p[100001],pf[10000],i,j,k;

//n<=10^12
    sn=sqrt(n);
//finding prime factors below sqrt(n)
   for(i=2;i<=sn;i++)
        p[i]=1;//initialization


//sieve method:
   for(i=2;i<=sqrt(sn);i++)
    {
        if(p[i]==1)
            for(j=2;i*j<=sn;j++)
                p[i*j]=0;

    }

        for(i=2,k=0;i<=sn;i++)
            if(p[i]==1) //prime factors below sqrt(n)
                {pf[k]=i;k++;}

for(i=0;i<k;i++)
    printf("%d ",pf[i]);


    for(int i=0;pf[i]<=sn;i++)
        if(n%pf[i]==0)
            return 0;
            //printf("%lld is not a prime\n",n);

    return 1;//printf("%lld is a prime\n",n);


}
