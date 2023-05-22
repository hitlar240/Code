#include<stdio.h>

int char_to_ascii(char);

int main()
{
    char ch;
    scanf("%c",&ch);

    printf("%d\n",char_to_ascii(ch));

return 0;
}

int char_to_ascii(char x)
{
    return x; //ASCII value of char x
}