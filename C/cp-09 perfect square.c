#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,k,t,n,l;
    //char n[10];

    scanf("%d",&t);


for(i=0;i<t;i++)
{
    scanf("%d",&n);
    k=sqrt(n);
    //printf("%d\n",n/k);

    if (k*k==n)
        printf("YES\n");

    else
        printf("NO\n");

}

return 0;
}
