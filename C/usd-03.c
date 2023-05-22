#include<stdio.h>

//Declaration: type name (parameter);
    void add(void);

int main()
{
    add(); // Calling Function
}

//Definition:
void add(void)
{
    int a,b,s;
    printf("a,b=\t");
    scanf("%d,%d",&a,&b);
    s=a+b;
    printf("SUM=\t%d",s);
}
