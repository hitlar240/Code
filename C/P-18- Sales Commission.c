// 18.Sales Commission
#include<stdio.h>
int main()
{
    float s,c;
    printf("Sales=\t");scanf("%f",&s);
//Commission
    if (0<=s && s<100) {printf("No Commission");}
    else if (100<=s && s<500){c=s*.1;printf("Commission=%f",c);}
    else if (s>=500){c=50+s*.15;printf("Commission=%f",c);}
    else {printf("Invalid!!");}
    return 0;
}
