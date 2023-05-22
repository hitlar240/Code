#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,k,t,n,l;
    //char n[10];

    scanf("%d",&t);


for(i=0;i<t;i++)
{
    scanf("%d",&n);

    l=n%10;
    while(1)
    {
        if(n<10) break;
        n=n/10;
    }

    printf("Sum = %d\n",l+n);

}

return 0;
}
