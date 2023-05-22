#include<stdio.h>
#include<math.h>


int main()
{
    int i,t,f;
    unsigned long long int n;
    scanf("%d",&t);


while(t--)
{
    scanf("%llu",&n);//range (0 to 2^64-1)

    f=1;

    for (i=2;i<=sqrt(n);i++)
        if(n%i==0)
            f+=i+n/i;//sum of factors (1<factors<n)


    if(f==n)
        printf("YES, %llu is a perfect number!\n",n);
    else
        printf("NO, %llu is not a perfect number!\n",n);

}
return 0;
}
