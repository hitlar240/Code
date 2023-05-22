#include<stdio.h>
#include<math.h> // math functions
#include<stdlib.h> // abs()

int main()
{
//double function(double)
    double x;
    // x = ceil(2.001);
    // x = floor(2.99);
    // x = round(2.5);
    // x = sqrt(4.9);
    // x = pow(7.2, 2.5);
    // x = exp(1); // e^1
     x = log(2.718281828); // ln(e)
    // x = sin(1.570796327); //angle in radian (pi/2)
    // x = atan(1); //angle in radian (pi/4)

    printf("x = %lf\n",x);


//int abs(int)
    int y = abs(-9);

    printf("y = %d\n",y);


return 0;
}