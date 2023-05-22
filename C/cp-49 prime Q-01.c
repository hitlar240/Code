#include <stdio.h>
#include <math.h>
#define s 10000
long long int pf[s];

long long int pr(long long int n);

int main()
{
    int t;
   long long int n,p[100001],i,j,k;

//n=10^12
   for(i=2;i<=100000;i++) //finding prime factors below sqrt(n)
        p[i]=1;//initialization

//sieve method:
   for(i=2;i<=sqrt(100000);i++)
       {
        //if(i%2==0) p[i]=0;

        if(p[i]==1)
            for(j=2;i*j<=100000;j++)
                p[i*j]=0;

        }

        for(i=2,k=0;i<=100000;i++)
            if(p[i]==1) //primes below sqrt(n)
                {pf[k]=i;k++;}

//for(i=0;i<k;i++)
//    printf("%d ",pf[i]);


   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%lld",&n);

    //int p=pr(n);

    if(pr(n)==1)
        printf("%lld is a prime\n",n);
    else
        printf("%lld is not a prime\n",n);

}

return 0;
}








long long int pr(long long int n)
{
    long long int i;

    for(i=0;pf[i]<=sqrt(n);i++)
        if(n%pf[i]==0)
            return 0;
            //printf("%lld is not a prime\n",n);


    return 1;//printf("%lld is a prime\n",n);


}
