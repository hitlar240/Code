#include<stdio.h>

int vowel(char s[], int i)
{
    if(s[i] == '\0')
        return 0;

    if(s[i] == 'a' || s[i] == 'A'|| s[i] == 'e'|| s[i] == 'E'|| s[i] == 'i'|| s[i] == 'I'|| s[i] == 'o'|| s[i] == 'O'|| s[i] == 'u'|| s[i] == 'U')
        return 1 + vowel(s, i+1);
    else
        return vowel(s, i+1);
}

int main()
{
    char s[201];
    fgets(s, 205, stdin);

    printf("%d\n",vowel(s, 0));

return 0;
}