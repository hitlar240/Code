#include<stdio.h>

void fun(int *pX)
{
    printf("pX = %p\n",pX);

    *pX = 50; // x = 50
}

int main()
{
    int x = 10;
    printf("address of x = %p\n",&x);

    fun(&x); // passing address of x

    printf("x = %d\n",x);

return 0;
}