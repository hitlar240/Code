#include<stdio.h>
// FUNCTION DEFINITION:
int add(int a, int b)
{
    int s;
    s=a+b;
    return s; //return type int
}

// MAIN FUNCTION:
int main()
{
    int a,b,r;
    printf("a,b=\t");
    scanf("%d,%d",&a,&b);
    r=add(a,b); // Call Function
    printf("SUM=%d",r);
}
