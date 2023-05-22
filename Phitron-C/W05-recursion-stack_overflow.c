#include<stdio.h>

void fun()
{
    printf("fun\n");
    // fun(); // fun() waiting for diffetent copy of fun()
}

int main()
{
    printf("main() starts\n");
    fun(); // main() waiting for fun()

return 0;
}