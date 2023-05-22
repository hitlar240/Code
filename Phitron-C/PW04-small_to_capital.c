#include<stdio.h>

char small_to_capital(char);

int main()
{
    char ch;
    scanf("%c",&ch);

    printf("%c\n",small_to_capital(ch));

return 0;
}

char small_to_capital(char x)
{
    return x-('a'-'A'); 
    //return x-32;
}