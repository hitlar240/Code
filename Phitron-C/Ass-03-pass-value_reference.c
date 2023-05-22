#include<stdio.h>

// pass by value: 
//     - passes the value of a variable to the calling function
//     - value stored in another (copy) variable and manipulated there without altering    
//       the value of the actual variable of the main function.

void swap_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// pass by reference: 
//     - passes reference/address of a variable to the calling function
//     - changes the value of the variable at that address
//     - that means it alters the value of the actual variable of the main function

void swap_by_reference(int *pA, int *pB)
{
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}

int main()
{
    int a=25, b=72;

    swap_by_value(a,b);
    printf("a=%d b=%d\n",a,b);

    swap_by_reference(&a,&b);
    printf("a=%d b=%d\n",a,b);

return 0;
}