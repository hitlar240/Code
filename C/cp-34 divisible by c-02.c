#include<stdio.h>
#include<math.h>

long long int gcd(long long int a, long long int b);
//long long int lcm(long long int a, long long int b);


int main()
{
    int T;
    long long int i,a,b,c,k;

    scanf("%d",&T);


//for(i=0;i<t;i++)
while(T--)
{
    scanf("%lld %lld %lld",&a,&b,&c);

    //k=lcm(a,b);
    k=(a*b)/gcd(a,b);

    for(i=k;i<=c;i+=k)
        printf("%lld\n",i);

    printf("\n");

//    for(i=1;i<=b;i++)
//        if(i*c>=a && i*c<=b)
//            printf("%d\n",i*c);




}

return 0;
}










long long int gcd(long long int a, long long int b)
{
    long long int t;

    //while(1)
    while(b%a!=0)
    {
        //if(b%a==0)   //break;
            //return a;

        t=a;
        a=b%a;
        b=t;

    }

return a;
}

//long long int lcm(long long int a, long long int b)
//{
//    return a*b/gcd(a,b);
//}
