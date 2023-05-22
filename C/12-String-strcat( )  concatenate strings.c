#include<stdio.h>
#include<string.h>
void strcat_(char str1[], char str2[]);

int main()
{
    char s1[1001];//,s2[1001];
    //char s1[]="tom al";
    char s2[]=" bolod!";

    //scanf("%s",&s); //reads before 1st 'space' character
    scanf(" %[^\n]",&s1); //reads before '\n' character

    printf("s1=%s s2=%s\n",s1,s2);
    printf("length s1=%d\n",strlen(s1));

    strcat_(s1,s2); // s1=s1+s2
    //strcat(s1," ChalaK!!");
    //strcat(s1,s2); // string2 is appended to string1

    printf("length s1=%d\n",strlen(s1));
    printf("s1=%s s2=%s\n",s1,s2);

return 0;
}



void strcat_(char str1[], char str2[])
{
    int l;
    //l=strlen(str1);
    for(l=0;str1[l]!='\0';l++); //length of str1


    int i=0;

//copy before '\0' character
    //for(i=0;str2[i]!='\0';i++)
    //while(str2[i]!='\0')

//copy with '\0' character and terminates
    //for(i=0; i<=strlen(str2); i++)
    while(i<=strlen(str2))
    {
        str1[l]=str2[i]; // copying characters form str2 and assigning after str1
        l++;
        i++; // increasing after assignment
    }

    //str1[l]='\0'; //terminating string


}
