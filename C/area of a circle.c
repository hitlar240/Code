#include<stdio.h>
// Area of a Circle
int main()
{
    const float pi=3.1416;
    int r;
    float area;
    printf("Radius=");
    scanf("%d",&r);
    area=pi*(pow(r,2));
    printf("Area=%f",area);
    return 0;
}