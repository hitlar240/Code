/* Syntax:

initialization;

while (condition)
    {
        // code block to be executed

        increment;
    }

*/


#include<stdio.h>

int main()
{

    int i=0; //initialization

    while (i<=5) //checking condition (before)
    {
        //i++; // increasing by 1 (before)
        printf("i=%d\n",i);
        i++; // increasing by 1 (after)
    }



    int j=10; //initialization

    while (j>=6) //checking condition (before)
    {
        //j--; // decreasing by 1 (before)
        printf("j=%d\n",j);
        j--; // decreasing by 1 (after)
    }



    int k=5;

    while(k--) //decreasing k by 1 (before) and terminates (after) k==0
        printf("k=%d\n",k); //also prints when terminates


//while(i++) { ....; if(==)break; .....; }
    int l=0;
    while(l++) //increasing by 1 (before) and never terminates!
    {
        printf("l=%d\n",l);

        if(l==5) break; // breaks the loop
    }


//infinite loop:
    while(1)
        printf("\nI love U");


return 0;
}
