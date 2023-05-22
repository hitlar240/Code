//return + no parameter
#include<stdio.h>

int sum(void);

int main()
{
    //printf("%d\n",sum(100)); //ignore argument
    printf("%d\n",sum()); //sum(void)

return 0;
}

//int sum()
int sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);

    int sum = a + b;

    return sum;
}