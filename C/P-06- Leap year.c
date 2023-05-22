// 06.Leap year
#include<stdio.h>
int main()
{
    int y;
    printf("Year=\t");scanf("%d",&y);

    if (y%4==0){printf("Leap year");}
    else {printf("not a leap year!");}
    return 0;
}

