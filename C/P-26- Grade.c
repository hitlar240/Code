// 26. Mark-Grade
#include<stdio.h>
int main()
{
    float m;
    printf("Your Mark:\t");scanf("%f",&m);
//Grade
    printf("Your Grade:\t");
    if (80<=m && m<=100){printf("A+");}
    else if (75<=m && m<80){printf("A");}
    else if (70<=m && m<75){printf("A-");}
    else if (65<=m && m<70){printf("B+");}
    else if (60<=m && m<65){printf("B");}
    else if (55<=m && m<60){printf("B-");}
    else if (50<=m && m<55){printf("C+");}
    else if (45<=m && m<50){printf("C");}
    else if (40<=m && m<45){printf("D");}
    else if (0<=m && m<40){printf("F");}
    else {printf("Invalid Mark!!");}
    return 0;
}
