#include<stdio.h>

//function prototype
void print(void);
int max(int, int); 
int sum(int, int);

// A function can return only one value
// A function can return/terminate at any stage -
    // -depending on the position of "return ;" statement in that function

int main()
{
    print();
//return 0; //main() returns/terminates here

    printf("max = %d\n",max(1,2));
    printf("sum = %d\n",sum(1,2));

return 0; //main() returns/terminates
}


//void print() //ignore parameter
void print(void) //no parameter
{
    printf("abul\n");

//return; //function returns/terminates here

    printf("tom al\n"); //not be printed if return before

return;
}

int max(int a,int b)
{   
    // if(a > b)
    //     return a;
    // else
    //     return b;

    return a>b ? a : b; //conditional operator
}

int sum(int a,int b)
{
//return -1; //function returns -1 and terminates here
    int sum = a + b;

return sum;
}