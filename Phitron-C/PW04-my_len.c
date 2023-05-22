#include<stdio.h>

// int my_len(char *s)
int my_len(char s[])
{
    int l=0;
    for( ; s[l]!='\0'; l++);

    return l;
}

int main()
{
    char s[1001];
    scanf("%s",s);

    printf("len = %d\n",my_len(s));

return 0;
}