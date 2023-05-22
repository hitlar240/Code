#include<stdio.h>

long long int gcd(long long int a, long long int b);
long long int lcm(long long int a, long long int b);

int main()
{
    long long int a,b;
    int t;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{


        scanf("%lld %lld",&a,&b);
        //if(a>b) {t=a;a=b;b=t;}//a<b

        printf("LCM = %lld\n",lcm(a,b));
        //printf("LCM = %d\n",a*b/gcd(a,b));
}

return 0;
}








long long int gcd(long long int a, long long int b)
{
    int i;
    for(i=a;i>=1;i--)
            if(a%i==0 && b%i==0)
                break;
return i;
}



long long int lcm(long long int a, long long int b)
{
    long long int m=a*b;
    return m/gcd(a,b);
}
