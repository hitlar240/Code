#include<stdio.h>
int pal(char str[]);


int main()
{
    int l;
    char s[1001],c[1001];
    scanf("%s",&s);
    //scanf(" %[^\n]",&s);

    if(pal(s)==1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome!\n");

return 0;
}



int pal(char str[])
{
    int l; // length
    for(l=0;str[l]!='\0';l++);

    for(int i=0;i<l/2;i++) // abc|cba
        if(str[i]!=str[l-1-i])
            return 0;

    return 1;
}
