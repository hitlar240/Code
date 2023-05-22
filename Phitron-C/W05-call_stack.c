#include<stdio.h>

void world()
{ 
    printf("  world() starts\n");

    //printf("   world\n");

    printf("  world() ends\n");
}

void hello()
{
    printf(" hello() starts\n");

    //printf("  hello\n");
    world(); // hello() waiting for world()

    printf(" hello() ends\n");

}

int main()
{
    printf("main() starts\n");

    hello(); // main() waiting for hello() 

    printf("main() ends!\n");

return 0;
}