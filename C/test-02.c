// 04.Temperature
#include<stdio.h>

//Defined function:
int farn(float c)
{
    float f;
    f=(c/5)*9+32;
    return(f);
}

// Main function:
int main()
{
    float f,c;

//Conversion  C -> F

    printf("Celsius=");
    scanf("%f",&c);

    f=farn(c);

    printf("Fahrenheit=%f",f);

}
