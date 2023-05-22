#include<stdio.h>

int main()
{
    int c;
    scanf("%c",&c);

    if(c>='a' && c<='z') c=c-('a'-'A');
    else if(c>='A' && c<='Z') c=c+('a'-'A');

    printf("%c\n",c);

return 0;
}
