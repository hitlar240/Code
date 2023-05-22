#include<stdio.h>

int main()
{
    char s[1000001];
    //fgets(s,1000001,stdin);
    //gets(s);
    scanf(" %[^\n]",s);

    for(int i=0;s[i]!='\\';i++)
    printf("%c",s[i]);

    return 0;
}
