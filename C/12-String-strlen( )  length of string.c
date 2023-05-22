#include<stdio.h>
#include<string.h>
int strlen_(char s[]);

int main()
{
    char s[1001];
    //char s[]="tom al";

    //scanf("%s",&s); //reads before 1st 'space' character
    scanf(" %[^\n]",&s); //reads before '\n' character

    printf("length=%d\n",strlen(s));
    printf("length=%d\n",strlen_(s));

return 0;
}



int strlen_(char s[])
{
    int i=0;
    //while(s[i]!='\0') i++;

    for(i=0;s[i]!='\0';i++); // i is increasing before checking condition


return i;
}
