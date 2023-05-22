#include<stdio.h>

long long int count(long long int a)
{
    if(a%2 != 0)
        return 0;

    if(a%2==0)
        return 1+count(a/2);
}

int main()
{
    int n;
    scanf("%d",&n);

    long long int m = 0;
    for(int i=0; i<n; i++)
    {
        long long int a;
        scanf("%lld",&a);
        long long int c = count(a);
        if(c > m)
            m = c;
    }

    printf("%lld\n",m);

return 0;
}