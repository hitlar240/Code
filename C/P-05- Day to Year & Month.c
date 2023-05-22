// 05.Day to Year & Month
#include<stdio.h>
#include<math.h>
int main()
{
    int d;
    float y,m;
//Input Day
    printf("Days:\t");scanf("%d",&d);
//Conversion
    y=(float)d/365;
    //m=((d%365)/30);
    m=(float)d/30;
//Output Year, Month
    printf("Year=%f\nMonth=%f",y,m);
}
