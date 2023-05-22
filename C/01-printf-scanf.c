// single-line comment
/*multi-line
comments*/
#include<stdio.h> //#include <stdio.h> is a header file library that lets us work with input and output functions
int main() //main() is a function, which is used to execute code
{
    //       / 'a'  "A"  %  & \  ?
    printf(" / 'a' \"A\" %% & \\ ? \n");


int a,b=2;
printf("Enter a,b=\t");

// scanf("formate specifier",&variable)
// & operator that specifies the address of variable

int c=scanf("%d,%d",&a,&b); // scanf - to take user input. *put reference operator (&) before variable
printf("\na=%d\nb=%d\nc=%d",a,b,c);

printf("%p",&b); // memory address in hexadecimal: where the variable is stored
// &variable (pointer) stores the memory address of a variable as its value
int* ptr = &b; // (*) dereference operator
// A pointer variable, with the name ptr, that stores the address of b
printf("\n\t%p",ptr);

printf("\n\nMosha Kamray -_-"); //printf() is a function used to output/print text to the screen
printf("Masi von\t-von kore -_- \n"); // \t Creates a horizontal tab
printf("Masi von-von kore -_-\n\n"); // \n (escape sequence) To insert a new line
printf("\nMasi von\\-von kore -_-\n"); //  \\ for "\"
printf("\nMasi \"von-von\" kore -_-\nkno?\nknoo:'-|"); //  \" ... \" for "..."





return 0; //return 0 ends the main() function
}
