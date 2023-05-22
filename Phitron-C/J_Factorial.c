#include<stdio.h>

long long int fct(long long int n)
{
    if(n == 0)
        return 1;

    return n * fct(n-1);
}

int main()
{
    long long int n;
    scanf("%lld",&n);

    printf("%lld\n",fct(n));

return 0;
}