#include<stdio.h>
#include<stdbool.h>

int main()
{

    short a ;    // 2 bytes (−32,768 to +32,767)
        printf("a=%d\n",a);  // %d  range of ~(3.2 E 4)

    unsigned short b ;   // 2 bytes (0 to +65,535)
        printf("b=%d\n",b);  // %d  range of ~(6.5 E 4)

    int c ;  //signed long int // 4 bytes (-2,147,483,648 to +2,147,483,647)
        printf("c=%d\n",c);  // %d %i  range of ~(+/-2.1 E 9)

    unsigned int d ;  //unsigned long int // 4 bytes (0 to +4,294,967,295)
        printf("d=%u\n",d);  // %u  range of ~(+4.2 E 9)

    long long int e ; // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807)
        printf("e=%lld\n",e);  // %lld %lli range of ~(+/-9.2 E 18)

    unsigned long long int f ; // 8 bytes (0 to +18,446,744,073,709,551,615)
        printf("f=%llu\n",f);  // %llu  range of ~(+1.8 E 19)


    float g ; // 4 bytes (32 bits of precision)
        printf("g=%f g=%e\n",g,g);  // %f  (6 - 7 digits) (1.2E-38 to 3.4E+38)

    double h ; // 8 bytes (64 bits of precision)
        printf("h=%.15lf h=%le\n",h,h); // %lf  (15 - 16 digits) (1.7E-308 to 1.7E+308)

    long double i ; // 16 bytes (32 bits of precision)
        printf("i=%.17Lf i=%Le\n",i,i); // %Lf ( ~19  digits) (3.4E-4932 to 1.1E+4932)

    char j ;   // 1 byte single character
        printf("j=%c\n",j);  // %c  ASCII value (-128 +127)

    char k ;   // 1 byte (-128 to +127) %d or %c
        printf("k=%c\n",k);  // char as numeric value

    char l[1] ;   // string (array of characters)
        printf("l=%s\n",l); // %s


    unsigned char m ;  // 1 byte (0 to +255)
        printf("m=%d\n",m);  // %d or %c


    bool n ;  // 1 byte (true or false)
        printf("n=%d\n",n);  // %d






return 0;
}
