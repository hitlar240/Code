#include<stdio.h>

int add(int x, int y)
{
    return x+y;
}

int main()
{
    int a, b;
    scanf("%d %d",&a, &b);

    printf("%d\n",add(a, b));

return 0;
}