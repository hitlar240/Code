#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,n;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    if(pow(n%10,3)+pow((n/10)%10,3)+pow((n/100)%10,3)==n)
        printf("%d is an armstrong number!\n",n);
    else
        printf("%d is not an armstrong number!\n",n);
}
return 0;
}

