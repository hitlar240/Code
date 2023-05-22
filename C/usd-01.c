#include<stdio.h>

//Declaration: type name (parameter);
    void write(void);

int main()
{
    write(); // Calling Function
}

//Definition:
void write() //void means the function does not have a return value
    {
        printf("\tA function that prints this text");
    }
