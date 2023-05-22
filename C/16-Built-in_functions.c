#include<stdio.h>
#include<math.h> // to use math functions
#include<stdlib.h> //abs()

int main()
{
    int i=floor(5.0/2);//float/double type value stored in integer type variable

//double function(double)
    printf("Power=%lf\n",pow(3.7,2.1)); //
    printf("Square Root=%lf\n",sqrt(16)); //
    printf("Cube Root=%lf\n",cbrt(27)); //
    printf("Ceiling=%lf\n",ceil(1.001)); //returns float/double type value
    printf("Floor=%lf\n",floor(1.999)); //returns float/double type value
    printf("Floor=%d\n",floor(5.0/2));//
    printf("Floor=%d\n",i);//
    printf("Round=%lf\n",round(2.5));//
    printf("Sine x=%lf\n",sin(1)); // angle in radian
    printf("Cosine x=%lf\n",cos(2.5)); //
    printf("Tangent x=%lf\n",tan(.5)); //
    printf("ArcSine x=%lf\n",asin(-.5)); //
    printf("ArcSosine x=%lf\n",acos(-1)); //angle in radian
    printf("ArcTangent x=%lf\n",atan(1/sqrt(3))); //
    printf("Exponent x=%lf\n",exp(1)); //

//int abs(int)
    printf("Absolute value=%d\n",abs(-9)); 
}

