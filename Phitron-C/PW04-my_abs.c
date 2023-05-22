#include<stdio.h>
int my_abs(int a)
{
    return a<0 ? -a : a;
}
int main()
{
    int a;
    scanf("%d",&a);

    printf("%d\n",my_abs(a));
    
return 0;
}