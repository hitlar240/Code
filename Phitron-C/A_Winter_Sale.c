#include<stdio.h>

int main()
{
    float p,x;
    scanf("%f %f", &x, &p);

    printf("%.2f\n",p/(1-x/100));

return 0;
}