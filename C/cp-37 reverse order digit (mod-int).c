#include<stdio.h>
#include<math.h>


int main()
{
    int i,t,n,r;

    scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    r=0;
    while(n!=0)
    {
        r=r*10+n%10;
    //printf("n=%d r=%d\n",n,r);
        n=n/10;


    }

    printf("%d\n",r);

}
return 0;
}
