#include<stdio.h>
int main()
/* Syntax

*/
{
int i;
l0op: for (i=0; i<10; i++) // label the loop
    {
     //if (i==4) {break;} // break - used to jump out of a loop
     //printf("%d\t",i);

     if (i==7) continue; //(skips the statements after continue): continues with the next iteration in the loop
     // if (i==5) {goto l0op;} // repeats the l0op

     printf("%d\t",i);
    }
}
