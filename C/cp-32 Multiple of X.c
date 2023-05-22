#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,n,x;


    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d",&x,&n);

    if(x>n) {printf("Invalid!\n\n"); continue;}


    for(i=x;i<=n;i+=x)
        printf("%d\n",i);

    printf("\n");

}
return 0;
}

