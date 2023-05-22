#include<stdio.h>
#include<stdbool.h> // boolian

int main()
{
    // void: (has no values) it doesn't return any value to the calling function()

    short a = 32767;    // 2 bytes (−32,768 to +32,767)
        printf("a=%d\n",a);  // %d  range of ~(3.2 E 4)

    unsigned short b = 65535;   // 2 bytes (0 to +65,535)
        printf("b=%d\n",b);  // %d  range of ~(6.5 E 4)

    int c = 2147483647;  //signed long int // 4 bytes (-2,147,483,648 to +2,147,483,647)
        printf("c=%d\n",c);  // %d %i  range of ~(+/-2.1 E 9)
        printf("c=%20.15d\n",c);  // %(spacing).(digit)d
        printf("c=%*.*d\n",20,15,c);  // %*.*d | spacing=20, digit=15
        printf("c=%.15d\n",c);  // prints 15 digits

    unsigned int d = 4294967295;  //unsigned long int // 4 bytes (0 to +4,294,967,295)
        printf("d=%u\n",d);  // %u  range of ~(+4.2 E 9)

    long long int e = 9223372036854775807; // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807)
        printf("e=%lld\n",e);  // %lld %lli range of ~(+/-9.2 E 18)

    unsigned long long int f = 18446744073709551615U; // 8 bytes (0 to +18,446,744,073,709,551,615)
        printf("f=%llu\n",f);  // %llu  range of ~(+1.8 E 19)


    float g = 3.141592; // 4 bytes (32 bits of precision)
        printf("g=%f g=%e\n",g,g);  // %f  (6 - 7 digits) (1.2E-38 to 3.4E+38)

    double h = 3.141592653589793; // 8 bytes (64 bits of precision)
        printf("h=%.15lf h=%le\n",h,h); // %lf  (15 - 16 digits) (1.7E-308 to 1.7E+308)

    long double i = 3.14159265358979323L; // 16 bytes (32 bits of precision)
        printf("i=%.17Lf i=%Le\n",i,i); // %Lf ( ~19  digits) (3.4E-4932 to 1.1E+4932)

    char j = 'x';   // 1 byte single character
        printf("j=%c\n",j);  // %c  ASCII value (-128 +127)

    char k = 120;   // 1 byte (-128 to +127) %d or %c
        printf("k=%c\n",k);  // char as numeric value

    char l[] = "tom al";   // string (array of characters)
        printf("l=%s\n",l); // %s


    unsigned char m = 255;  // 1 byte (0 to +255)
        printf("m=%d\n",m);  // %d or %c


    bool n = true;  // 1 byte (true or false)
        printf("n=%d\n",n);  // %d


//enumerated data type
    // enum  identifier { value1, value2, ..., valuen }
    //-

//pointer variable
    int *p = &c; //memory address of integer variable c
    printf("p=%p\n",p); // %p formate specifier for pointer variable
    printf("p=%p\n",&c);

return 0;
}
