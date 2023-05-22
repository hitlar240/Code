#include<stdio.h>
#include<string.h>

//void fun(char *ar)
void fun(char ar[])
{
    int l = strlen(ar); //count until '\0'

    printf("length = %d\n",l);
}

int main()
{
    char ar[101] = "tom al";

    fun(ar);

return 0;
}