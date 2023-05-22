#include<stdio.h>
// Leapyear
int main()
{
    int y;
    printf("Year=\t");
    scanf("%d",&y);
    if (y%4==0)
        {printf("Leapyear");}
    else {printf("not a leapyear!");}
    //printf("Hello world!");
    return 0;
}