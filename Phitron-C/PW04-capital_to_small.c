#include<stdio.h>

char capital_to_small(char);

int main()
{
    char ch;
    scanf("%c",&ch);

    printf("%c\n",capital_to_small(ch));

return 0;
}

char capital_to_small(char x)
{
    return x+('a'-'A'); 
    //return x+32;
}