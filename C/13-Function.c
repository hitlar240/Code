#include<stdio.h>


//function declearation and definition

//void f(void) //no parameter
void f()  //ignore parameter
{//void means the function does not have a return value

//return; //function returns/terminates here

    printf("stupid function :|\n");

// return; 
}

//function declearation
int max(int, int); //(char[],int[],float,...)

   

int main()
{
    f(); // Inside main(), call function f()

//return 0;
    // if we return here, the main() function terminates here and the further statements cannot be executed !!

    printf("Max=%d", max(1,1) ); //call fonction max() inside function printf() inside main() 

return 0; // function main() returns 0
}

//function definition
int max(int a, int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }