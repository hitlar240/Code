#include<stdio.h>
int max(int, int);


int main()
{
    printf("%d\n",max(1,2));

return 0;
}

int max(int a,int b)
{
    return a>b ? a : b;
}