// 21.Electric Bill
#include<stdio.h>
int main()
{
    float u,b;
    printf("Monthly Consumption Unit:");scanf("%f",&u);
//Bill
    if(u>=0 && u<=100){b=u*(2.5+0.15)+120;printf("Bill=%f",b);}
    else if(u>100 && u<=200){b=100*(2.5+0.15)+(u-100)*(4+0.15)+120;printf("Bill=%f",b);}
    else if(u>200){b=100*(2.5+0.15)+100*(4+0.15)+(u-200)*(7+0.15)+120;printf("Bill=%f",b);}
    else {printf("Invalid Unit!!");}
    return 0;
}
