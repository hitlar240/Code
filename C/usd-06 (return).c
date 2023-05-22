#include <stdio.h>

double mul(double x, double y);

int main()
{
    double a,b,c;
    printf("a,b=\t");
    scanf("%lf,%lf",&a,&b);

    c=mul(a,b); // call function
    printf("\na*b=%lf",c);

}

double mul (double w, double z)
{
    return (w*z); // return type double
}
