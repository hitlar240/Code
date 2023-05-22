#include<stdio.h>
#include<string.h>
void strncpy_(char copy[], char source[], int n);


int main()
{
    char c[1001];//,s[1001];
    char s[]="1234567890";

    //scanf("%s",&s); //reads before 1st 'space' character
    //scanf(" %[^\n]",&s); //reads before '\n' character


    //printf("c=%s s=%s\n",c,s); //before copy


    //strncpy_(c,s,5); // n<=strlen(s)
    strncpy(c,"abcdefghij",3);
    //strncpy(c,s,5); //copy 1st n characters


    printf("c=%s s=%s\n",c,s); // after copy

return 0;
}






void strncpy_(char copy[], char source[], int n)
{
    int i=0;
    for( ;i<n;i++) //copy 1st n characters
    {
        copy[i]=source[i];
        // increasing after assignment
    }

    copy[i]='\0'; //terminating string

}
