/* Syntax:

for( initialization,...,s ; condition; increment,...,s )
    {
        // code block to be executed
    }

*/

#include<stdio.h>

int main()
{
    int i=0,k;

    //loooop: for (; i<10; i=i+2) // labeling the loop
    //for(;;) //infinite loop
    //for(;;i++) //increasing i (infinite loop)
    //for (i=0; i<5; i++)  // (start; end; increment)
    for(int j=0;j<5;j++)
         printf("i= %d love U\n",i); //single statement doesn't need {}


     for (i=0,k=1024; i<=10; i++,k/=2) //increasing i by 1, decreasing k exponentially by power of -2
     {
         printf("i=%d\tk=%d\n",i,k);
     }



return 0;
}
