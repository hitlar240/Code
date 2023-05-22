#include<stdio.h>

void fun(int x)
{
    printf("address of x in fun() = %p\n",x);

    x = 100; // x in fun()

return;
}


int main()
{
    int x = 10;
    printf("address of x in main() = %p\n",&x);

    fun(x); // passing value, not variable!

    printf("x = %d\n",x); // x in main()

return 0;
}