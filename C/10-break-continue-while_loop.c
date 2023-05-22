#include<stdio.h>

int main()
{
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    int i=0;
    while (i<10)
    {
     //i++;
     if (i==4) break; // break - used to jump out of a loop
     //printf("%d\t",i);
     //if (i==7) continue; //continues with the next iteration in the loop
     printf("%d\t",i);
     i++;
    }
}
