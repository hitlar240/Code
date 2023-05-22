#include<stdio.h>



int main()
{
    int i,t,n;
    long long int f=1;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
        scanf("%d",&n);

        for(i=2;i<=n;i++)
            f=f*i;

        printf("%lld\n",f);
        f=1;

}

return 0;
}
