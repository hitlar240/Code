#include<stdio.h>
int main()
{
    int x=5,y=3;        // = assignment operator
    printf("x=%d y=%d\n",x,y);


//Arithmetic Operation:

    int add=x+y;        //addition
    int sub=x-y;        //subtraction
    int mul=x*y;        //multiplication
    int div=x/y;        //int division
    int mod1=x%y;       //mod (remainder)
    int mod2=y%x;       //3/5=0  mod=3

//computer gives approximate values for real numbers
//therefore real-arithmetic can yield incorrect result!

    float z=(1.0/3.0);
    float dvf=3.0*z; // 3*(1/3) = 1

//Cast Operator:
    float dvf1=(float)x/y; //(data type) variable
    float dvf2=1.0*x/y;  //1.0* for type casting int to float

    printf("x+y=%d\n",add);
    printf("x-y=%d\n",sub);
    printf("x*y=%d\n",mul);
    printf("x/y=%d\n",div);
    printf("x%%y=%d\n",mod1); // %% for %
    printf("y%%x=%d\n",mod2);
    printf("3*(1/3)=%f\n",dvf);   // %f
    printf("x/y=%f\n",dvf1);   // %f
    printf("x/y=%f\n",dvf2);   // %f

//Priority of Arithmetic Operators
    //-without parentheses will be evaluated from left to right
    //-high priority * / %
    //-low priority + -

    printf("7*2-10%%7*5/4+2=%d\n",7*2-10%7*5/4+2); //(7*2)-((10%7)*5)/4+2
    printf("7*2-10%%7*5/4+2=%f\n",7.0*2.0-(10%7)*5.0/4.0+2.0); //(7*2)-((10%7)*5)/4+2



//Relational Operation:
    // 1=true | 0=false

    printf("x>y? %d\n",x>y);     // x greater than y        // !(x<=y)
    printf("x>=y? %d\n",x>=y);   // x greater or equal y    // !(x<y)
    printf("x<y? %d\n",x<y);     // x less than y           // !(x>=y)
    printf("x<=y? %d\n",x<=y);   // x less equal y          // !(x>y)
    printf("x==y? %d\n",x==y);   // x equal y               // !(x!=y)
    printf("x!=y? %d\n",x!=y);   // x not equal y           // !(x==y)



//Logical Operation:
    // 1=true | 0=false

    //logical AND
    printf("T && T = %d\n",1&&1); // T && T = T
    printf("T && F = %d\n",1&&0); // T && F = F
    printf("F && T = %d\n",0&&1); // F && T = F
    printf("F && F = %d\n",0&&0); // F && F = F

    //logical OR
    printf("T || T = %d\n",1||1); // T || T = T
    printf("T || F = %d\n",1||0); // T || F = T
    printf("F || T = %d\n",0||1); // F || T = T
    printf("F || F = %d\n",0||0); // F || F = F

    //logical NOT
    printf("! T = %d\n",!1);      // NOT T = F
    printf("! F = %d\n",!0);      // NOT F = T

    printf("x<y||x>=y? %d\n",x<y||x>=y);
    printf("x>=y&&x!=y? %d\n",x>=y&&x!=y);



//Assignment Operation:

    int a=17,b=2;

    x=a; // assigning the value of a to x
    printf("x=%d\n",x); // x=17

//Increment Operator:
    x++; // ++x  x=x+1 incremented by 1 and assigning to x
    printf("x=%d\n",x); // x=17+1

    x+=b; // x=x+b incremented by b and assigning to x
    printf("x=%d\n",x); // x=18+2

    // post-increment
    x=b++; // 1st-assign 2nd-increase
    printf("x=%d b=%d\n",x,b); //x=b; b=b+1;

    // pre-increment
    x=++b; // 1st-increase 2nd-assign
    printf("x=%d b=%d\n",x,b); //b=b+1; x=b;


//Decrement Operator:
    --x; // x--  x=x-1 decremented by 1 and assigning to x
    printf("x=%d\n",x); // x=4-1

    // post-decrement
    x=b--; // 1st-assign 2nd-decrease
    printf("x=%d b=%d\n",x,b); //x=b; b=b-1;

    // pre-decrement
    x=--b; // 1st-decrease 2nd-assign
    printf("x=%d b=%d\n",x,b); //b=b-1; x=b;

    x-=b; // x=x-b decremented by b and assigning to x
    printf("x=%d\n",x); // x=2-2



    y*=b; // y=y*b multiplied by b and assigning to x
    printf("y=%d\n",y); // y=3*2

    y/=b; // y=y/b divided by b and assigning to x
    printf("y=%d\n",y); // y=6/2

    y%=b; // y=y%b assigning the remainder of x/b to x
    printf("y=%d\n",y); // y=3%2



//Conditional Operator | ternary operator 

    int c;

    c= x>y? a:b; //if x>y is true then c=a else c=b
    printf("c=%d\n",c);

    c= !(x>y)? a:b; //if x>y is not true (x<=y) then c=a else c=b
    printf("c=%d\n",c);



//Bitwise Operator

    int k=x^=y; // (m^n) bitwise exclusive OR
    int l=x|=y; // (m|n) bitwise inclusive OR

    printf("k=%d\n",k);
    printf("l=%d\n",l);


    int i=5; // 5(00000101)
    int j=9; // 9(00001001)

    printf("i=%d j=%d\n",i,j);

    // & (bitwise AND):       // 00000101 & 00001001
    printf("i&j=%d\n",i&j);   //      00000001

    // | (bitwise OR):        // 00000101 | 00001001
    printf("i|j=%d\n",i|j);   //      00001101

    // ^ (bitwise XOR):       // 00000101 ^ 00001001
    printf("i^j=%d\n",i^j);   //      00001100

    // ~ (bitwise NOT):       // ~ 00000101
    printf("~i=%d\n",~i);     //   11111010

    // << (left shift):       // 00001001 << 1
    printf("j<<1=%d\n",j<<1); // 00010010 (shifted to left by 1 place)

    // >> (right shift):      // 00001001 >> 1
    printf("j>>1=%d\n",j>>1); // 00000100 (shifted to right by 1 place)





//Special Operator

    int n,m,v;

    //comma (,) operator
    v=(x=5,y=7,y-x); //evaluated left to right
    printf("v=%d\n",v);

    //sizeof() operator
    n=sizeof(char); //returns the number of bytes the operand occupies
    printf("n=%d\n",n);

    m=sizeof(x); // int x takes 4 bytes space in RAM
    printf("m=%d\n",m);

    //pointer* operator


}
