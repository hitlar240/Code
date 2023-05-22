#include<stdio.h>

int main()
{
    char c;

    scanf("%c",&c);

    if(c>='a' && c<'z')
        printf("%c\n",c+1);
    else if(c=='z')
        printf("a\n");

return 0;
}
