#include <stdio.h>
double pi=3.1416;
void Pi();

int main()
{
    printf("\npi=%lf",pi);
    Pi(); // call function
    //pi=3.14;
    printf("\npi=%lf",pi);
}

void Pi ()
{
    //double pi=3.14; // local var. doesn't change the value of global var.
    pi=3.14; //changing value of global variable
}
