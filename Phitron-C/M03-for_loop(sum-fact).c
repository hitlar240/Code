#include<stdio.h>

int main()
{
    int i,s=0; //initial values
    long long int f=1; //initial values

    for (i=1;i<=15;i++)
    {
        s+=i;//s=s+i; //sum

        f*=i;//f=f*i; //factorial

        printf("i=%d s=%d f=%lld\n",i,s,f);
    }

    printf("sum=%d\n",s); // range of ~(10^9)
    printf("factorial=%lld\n",f); // range of ~(10^18)

return 0;
}
