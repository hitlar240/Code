#include<stdio.h>

//Declaration: type name (parameter);
    int add(int a, int b);

int main()
{
    add(3,5); // Calling Function
}

//Definition:
int add(int a, int b)
{
    int s;
    s=a+b;
    printf("SUM=\t%d",s);
}
