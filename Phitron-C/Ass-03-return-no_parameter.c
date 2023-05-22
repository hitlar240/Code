//return + no parameter

#include<stdio.h>

int age(void)
{
    int age;
    scanf("%d",&age);

    return age;
}

int main()
{
    printf("you are %d years old\n",age());

return 0;
}