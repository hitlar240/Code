// #Preprocessor inclusion <header_file.h>
//header files:
    //stdio.h – Defines core input and output functions
    //stdlib.h – Defines numeric conversion functions, pseudo-random network generator, and memory allocation
    //string.h – Defines string handling functions
    //math.h – Defines common mathematical functions.

#include<stdio.h> //a header file library that lets us work with input and output functions, such as printf()
// Header File (.h)
// #include<file.h>  file from System Libraries
// #include"file.h"  file from Local Directory


// #define name value   (for defining a Global Constant)
#define PI 3.1415962 // PI=3.1415962 value cannot be changed inside main()

const float pi=3.1415962; //value can be changed inside main()

int a; // declaring Global Variable before the main()
// Global Variables are initialized by default = 0 If we don't assign value


//main() function:
//every C program needs a main() function
//Any code inside its curly brackets {} will be executed.
    //main()            //(no parameter)
    //main(void)
    //int main()        //returns an integer value to the operating system
    //int main(void)
    //void main()       //does not return any information to the operating system
    //void main(void)


int main()
// {} pair of curly brackets define the body of a function
{

 // C token:
    //Keywords(int, for, float, while,...)
    //Identifiers(main, var_name, fun_name, label,...)
    //Constants(-19.87, 100,...)
    //Operators(+, -, *, /, %,...)
    //Strings("tom", "ABC",...)
    //Special Symbols( ; () {} [] # ~ * ...)


 // identifier is a name used to identify a variable
 //Variable:
     // variable is a memory location
     // data_type variable_name = value;
     // A defined variable will contain some random garbage value till it is not initialized.
     // (;) is statement terminator

     //Global variables are declared outside the function or a block of code
        //-Their scope is the whole program
        //-can be accessed by all the functions present in the program

     //Local variables are declared inside a function or a block of code
        //-Their scope is limited to the block or function in which they are declared.



 //Escape Sequence:
    // \0 - NULL
    // \a - Alarm or Beep
    // \b - Backspace
    // \f - Form Feed
    // \n - New Line
    // \r - Carriage Return
    // \t - Horizontal Tab
    // \v - Vertical Tab
    // \\ - Backlash
    // \' - Single Quote
    // \" - Double Quote
    // \? - Question Mark
    // \ooo - Octal Number
    // \xhh - Hexadecimal Number



 const float pi=3.1416;// Local Constant
printf("PI=%f\npi=%f\n",PI,pi);

 a=1.5; // we declared a as an integer but we are assigning fractional value. output shows the integer value
 float b=2.67; // Local Variable

printf("A=%d\nB=%f\n",a,b);

// Converting one datatype into another is known as type casting or, type-conversion.
// Cast Operator -   (Type) Variable
printf("B = %d", (int) b); // Converting float to int
//exit(0);//<stdlib.h> to stop execution at any instant


//The return statement refers to the return values from a function depending upon the return type of that function
return 0; // terminates the main() function and returns the value 0 to the operating system
//The value returned by the main indicates the status of program termination
//main() will return 0 if program terminates successfully with no error
}

