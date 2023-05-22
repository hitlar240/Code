#include<stdio.h>

int main()
{
    int n; // array size
    scanf("%d",&n);

    long long int a[n],s=0; // initial sum = 0


    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        s+=a[i]; // s=s+a[i]
    }


//absolute sum:
    if(s>=0)
        printf("%lld\n",s);
    else
        printf("%lld\n",-s);


return 0;
}
