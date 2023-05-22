// Parameters act as variables inside the function.
/* Syntax
returnType functionName (parameter1, parameter2, parameter3)  (i.e., Declaration part)
    {
  // code to be executed (i.e., Definition part)
    }
*/
#include<stdio.h>
// declaring new function:
// void - indicates that the function should not return a value
void p(char n[], int a) // Declaration
    {
        printf("Name: %s\t Age:%d\n",n,a); // Definition
    }

// summation function:
int s(int i ,int j)
    {
        return i+j;
    }

// recall the functions p() and s() inside the main() function
int main() //function main() returns integer value
{
    p("tom", 22); // "tom", 22 are arguments of the parameters
    p("robot",22);

    int sum=s(3,7); // s(argument1, argument2)
    printf("sum=%d\n",sum);
// or,
    printf("sum=%d\n",s(6,7));

    return 0; // main() function returns 0
}
