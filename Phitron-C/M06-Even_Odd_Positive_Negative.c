#include<stdio.h>

int main()
{
    int t,N,e,o,p,n;
    e=o=p=n=0; // initialize

    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%d",&N);

        if(N>0) p++;
        else if(N<0) n++;

        if(N%2==0) e++;
        else o++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,n);

return 0;
}
