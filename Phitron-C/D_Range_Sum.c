#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long int l,r;
        scanf("%lld %lld",&l,&r);

        if(l>r)
        {
            long long int T=l; l=r; r=T;
        }

        long long int s=0;
        // for(long long int i=l; i<=r; s+=i++);
        s = (r-l+1)*(l+r)/2;
        printf("%lld\n",s);
    }

return 0;
}