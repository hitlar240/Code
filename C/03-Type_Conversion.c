//type conversion (widening conversion): source data type < destination data type




//Implicit Type Conversion:
    //-automatic type conversion
    //-takes place in an expression having more than one data type
    //-variables are upgraded to the largest data type.

    //bool -> char -> short int -> int ->
    //unsigned int -> long -> unsigned ->
    //long long -> float -> double -> long double



//Explicit Type Conversion: (type casting)
    //-user-defined type conversion

    // (type) expression


#include<stdio.h>

int main()
{
    int a=1000000000; // 10^9
    int b=1000000000; // 10^9

    long long int c=1000000000; // 10^9
    long long int d=1000000000; // 10^9

    long long int m=a*b; // (int*int) a*b is assigning to m (long long int)
    long long int n=c*d; // (ll.int*ll.int) c*d is assigning to n (long long int)


    printf("a*b=%lld\n",a*b); // (int*int)=int
    printf("c*d=%lld\n",a*c); // (int*ll.int)=long long int

    printf("a*b=%lld\n",m);
    printf("c*d=%lld\n",n);


    char x='x',y='y';

    int z=x+y; // (char+char)=int ASCII value (-128 to 127)

    printf("x+y=%c\n",x+y);
    printf("x+y=%d\n",z);


    int  i = 17;
    char j = 'c'; // ascii value is 99
    float sum = i + j; // int+char=int assigned to float

    printf("Value of sum : %d\n", i+j ); // int + char = int
    printf("Value of sum : %f\n", sum ); //



return 0;
}
