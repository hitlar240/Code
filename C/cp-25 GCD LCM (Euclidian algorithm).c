#include<stdio.h>

long long int gcd(long long int a, long long int b);
long long int lcm(long long int a, long long int b);

int main()
{
    long long int a,b;
    int T,t;

    scanf("%d",&T);


//for(i=0;i<t;i++)
while(T--)
{


        scanf("%lld %lld",&a,&b);
        if(a>b) {t=a;a=b;b=t;}//a<b

        printf("LCM = %lld\n",lcm(a,b));
        //printf("LCM = %d\n",a*b/gcd(a,b));

}

return 0;
}








long long int gcd(long long int a, long long int b)
{
    int t;

    //while(1)
    while(b%a!=0)
    {
        //if(b%a==0) //break;
            //return a;

        t=a;
        a=b%a;
        b=t;

    }

return a;
}

long long int lcm(long long int a, long long int b)
{
    return a*b/gcd(a,b);
}
