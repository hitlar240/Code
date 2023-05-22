#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001],c[1001];
    scanf("%s",&s);
    //scanf(" %[^\n]",&s);

    strcpy(c,s); // copy string s to c

    strrev(s); // reverse string s


    if(strcmp(c,s)==0) // compare strings
        printf("Palindrome\n");
    else
        printf("Not Palindrome!\n");


return 0;
}
