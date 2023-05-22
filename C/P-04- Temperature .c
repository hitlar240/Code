// 04.Temperature
#include<stdio.h>




int main()
{
    int i;
    float f,c;
//Choice
    printf("1.Fahrenheit->Celsius\n2.Celsius->Fahrenheit\nChoice:\t");scanf("%d",&i);

//Conversion
    switch (i)
    {
    case 1:
    printf("Fahrenheit=");scanf("%f",&f);
    c=5*(f-32)/9;
    printf("Celsius=%f",c);
    break;

    case 2:
    printf("Celsius=");
    scanf("%f",&c);
    f=(c/5)*9+32;
    printf("Fahrenheit=%f",f);
    break;

    default: printf("Invalid Choice!");
    }
    return 0;
}
