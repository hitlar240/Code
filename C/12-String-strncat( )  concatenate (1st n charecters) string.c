#include<stdio.h>
#include<string.h>
void strncat_(char str1[], char str2[], int n);

int main()
{
    char s1[1001];//,s2[1001];
    //char s1[]="tom al";
    char s2[]="1234567890";

    //scanf("%s",&s); //reads before 1st 'space' character
    scanf(" %[^\n]",&s1); //reads before '\n' character

    printf("s1=%s s2=%s\n",s1,s2);
    printf("length s1=%d\n",strlen(s1));

    //strncat_(s1,s2,5); // s1=s1+(1st n characters of s2)
    strncat(s1,"1234567890",5);
    //strncat(s1,s2,5); // string2 is appended to string1

    printf("length s1=%d\n",strlen(s1));
    printf("s1=%s s2=%s\n",s1,s2);

return 0;
}



void strncat_(char str1[], char str2[], int n)
{
    int i=0,l;

    //l=strlen(str1);
    for(l=0;str1[l]!='\0';l++); //length of str1


    for( ;i<n;i++)
    {
        str1[l+i]=str2[i]; // copying 1st n characters form str2 and assigning after str1
        // increasing after assignment
    }

    str1[l+i]='\0'; //terminating string



}
