/* general rules:
Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names
*/
#include<stdio.h>
#define e 2.78 // defining constant e
int main()
{
int x; // variable type: int  for (integers) Range: (-2146473648 to 2146473647)
x=5;

float y=3.12356; // value range 1.2E-38 to 3.4E+38
double r= 3.9E+200; // value range 2.3E-308 to 1.7E+308
long double n=4.9E+2002; // value range 3.4E-4932 to 1.1E+4932

const float pi=3.1416; // we declare a constant Pi

int sum1=x+y;
float sum2=x+y;
char a='m',b='n';
a='ki?', b='l'; // we overwrite the assigned values of a,b here
// void k; // void indicates that no value is available
printf("Pi,e=%f\t%f\n\n",pi,e);
printf("a=%c",a); // format specifier: for integer "%d" or "%i"
printf("\nx=%i\n",x);
printf("b=%c\n",b);
printf("\ny=%5.3f\n",y);//5 places in all 3 places to the right of decimal point
printf("\ny,m,n=%f\n%f\n%f\n\n",y,r,n);
printf("sum=%d\nsum=%f\nsum=%d\nsum=%f\n",sum1,sum1,sum2,sum2);
printf("\na=%c\nb=%c\nx=%d\ny=%f",a,b,x,y);
}
