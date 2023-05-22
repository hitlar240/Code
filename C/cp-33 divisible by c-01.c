#include<stdio.h>
#include<math.h>

int main()
{
    int T,t,k;
    long long int i,a,b,c,n;

    scanf("%d",&T);


//for(i=0;i<t;i++)
while(T--)
{
    scanf("%lld %lld %lld",&a,&b,&c);

    if(a%c==0) n=a;
    else n=c*((a+c)/c);


    //for(i=a;i<=b;i++)
        //if(i%c==0) printf("%d\n",i);


    //double m=1.0*a/c;
    //for(i=ceil(m)*c;i<=b;i+=c)//ceil returns double type value


    for(i=n;i<=b;i+=c)
        printf("%lld\n",i);



    //if(T!=0)
        printf("\n");


}

return 0;
}
