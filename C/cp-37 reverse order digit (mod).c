#include<stdio.h>
#include<math.h>


int main()
{
    int i,t,n,d;

    scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    i=0;

    while(n!=0)
    //while(d>9)
    {
        printf("%d",n%10);
    //printf("n=%d r=%d\n",n,n%10);
        n=n/10;


        //d=n/pow(10,i);
        //printf("%d",d%10);
    //printf("d=%d r=%d\n",d,d%10);
        //i++;
    }

    printf("\n");

}
return 0;
}
