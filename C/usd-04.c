#include<stdio.h>

/* SYNTEX:

return_type  function_name (parameter list)
{
    local variable declaration;
    executable statement1;
    executable statement2;
    . . . . . . . . . .
    return statement;
}

*/

// FUNCTION DEFINITION:
    void write(void) //void means the function does not have a return value
    {
        printf("\tA function that prints this text");
    }

// Main Function:
int main()
{
    write(); // Calling Function
}

