/* Syntax:

initialization;

do
    {
        // code block to be executed
        increment;
    }
while (condition);

*/

#include<stdio.h>

int main()

{
    // while loop -> checks a condition, THEN executes a block of code if condition is true
    // do while loop -> always executes a block of code once, THEN checks a condition
    
    int i=0;
    do
    {
        i++; //increasing by 1 (before)

        printf("Roll no. %d\n",i);

        if(i%2!=0)
            printf("\t -'Yes Sir'\n");
        else if(i==72)
            printf("\t -DEAD!\n");
        else
            printf("\t -Absent\n");

         //i++; //increasing by 1 (after)
    }
    while (i<82); // ';'  checking condition (after)


return 0;
}
