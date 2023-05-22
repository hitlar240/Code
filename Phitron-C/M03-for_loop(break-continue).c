#include<stdio.h>

int main()
{
    int i;

    for (i=1;i<=10;i++)
    {
        //printf("i=%d\n",i);

        if(i==9) break; // breaks the loop

        if(i==5) continue; // skips the statements after continue; in the loop

        printf("i=%d\n",i); // will not be printed
    }

return 0;
}
