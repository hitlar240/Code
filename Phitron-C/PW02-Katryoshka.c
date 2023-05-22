#include<stdio.h>

int main()
{
    long long int e,m,b,c=0;

    scanf("%lld %lld %lld",&e,&m,&b);

    if(m<=e && m<=b)
    {
        // m->0
        e-=m; //e=e-m;
        b-=m; //b=b-m;

        if(e/2 <= b) //for each 2(e) 1(b)
            c=m+e/2;
        else
            c=m+b;
    }

    else if(b<=e && b<=m)
        c=b;

    else
        c=e;

    printf("%lld\n",c);

return 0;
}
