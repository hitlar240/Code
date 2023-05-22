//return + parameter

#include<stdio.h>

int mul(int a, int b)
{
    return a*b;
}

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    printf("%d\n",mul(a,b));

return 0;
}