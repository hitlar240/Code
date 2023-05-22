#include <stdio.h>

//function declaration
int fun1(int x);
void fun2(int a[]);

int main()
{
 int x = 10, y = 20, z = 30;
 printf("\nx=%d\ty=%d\tz=%d",x, y,z);

 z = fun1(x); //changes value of z
 // prints the values x,y assigned in main() not in fun1()
 printf("\nx=%d\ty=%d\tz=%d",x, y,z);


//arrray
 int a[] = {1, 2, 3, 4, 5};
 printf("\n\na[0]=%d", a[0]);

 fun2(a);
 // changes the value of a[0] & prints this value of fun2()
 printf("\na[0]=%d", a[0]);
 return 0;
}


//function deff. fun1
int fun1(int x)
{
 int y = x;
 x = 2 * y;
 return (x * y);
}

//function deff. fun2
void fun2(int b[])
{
 b[0] = 100;
}

