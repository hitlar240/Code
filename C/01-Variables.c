//Variable:
    // variable is a memory location
    // data_type variable_name = value;
    // A defined variable will contain some random garbage value till it is not initialized.

//Global variables are declared outside the function or a block of code
    //-Their scope is the whole program
    //-can be accessed by all the functions present in the program

//Local variables are declared inside a function or a block of code
    //-Their scope is limited to the block or function in which they are declared.
    //-default value is a garbage value

//Static variable are defined using the static keyword
    //static data_type variable_name = initial_value;
    //-their scope depends upon the region where they are declared (can be global or local)
    //-default value is zero.

//Constant variable is a read-only variable whose value cannot be modified once it is defined.
    //const data_type variable_name = value;

//External variables in C can be shared between multiple C files.
    //extern data_type variable_name; in a header file
    //Their scope is global and they exist between multiple C files

#include <stdio.h>

int x = 5; // global variable


int main() 
{
    int y = 10; // local variable

    printf("x=%d y=%d\n",x,y);

    const int c=5; // read-only variable

    //c=10; // cannot change value

    printf("c=%d\n",c);


    for(int i=1;i<=5;i++)
    {
        printf("i=%d\n",i);
    }

    //printf("i=%d\n",i); // undeclared outside scope

return 0;
}
