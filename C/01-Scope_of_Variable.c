#include<stdio.h>

int x = 240; //global variable | scope all over this programm

void fun(void)
{
    printf("inside fun()\n");

    //int x = 72; // local var. scope inside fun() {...}
    printf("address of x in fun() = %p\n",&x);
}

int main()
{
    //int x = 25; // local varl. scope inside main() {...}
    printf("address of x in main() = %p\n",&x);

    fun();

    printf("x= %d",x); //prints x of main() 

return 0;
}