#include<stdio.h>
#include<string.h>
void strncat_(char str1[], char str2[], int n);

int main()
{
    char s1[1001];//,s2[1001];
    //char s1[]="tom al";
    char s2[]="1234567890";

    //scanf("%s",&s); //reads before 1st 'space' character
    scanf("%[^\n]",&s1); //reads before '\n' character

    printf("s1=%s s2=%s\n",s1,s2);
    printf("length s1=%d\n",strlen(s1));

    strncat_(s1,s2,3); // s1=s1+s2
    //strncat(s1," ChalaK!!",3);
    //strncat(s1,s2,3); //1st n chars of string2 is appended to string1

    printf("length s1=%d\n",strlen(s1));
    printf("s1=%s s2=%s\n",s1,s2);

return 0;
}



void strncat_(char str1[], char str2[], int n)
{
    int l;
    //l=strlen(str1);
    for(l=0;str1[l]!='\0';l++); //length of str1


    int i=0;

//copy 1st n characters of str2 to the end of str1
    //for(i=0; i<n; i++,l++)
    while(i<n)
    {
        str1[l]=str2[i]; // copying characters form str2 and assigning after str1
        l++;
        i++; // increasing after assignment
    }

    str1[l]='\0'; //terminating string


}
