#include<stdio.h>
#include<string.h>
void strrev_(char str[]);

int main()
{
    char s[1001];

    //scanf("%s",&s);
    scanf("%[^\n]",&s);

    strrev_(s); // reverse string s
    //strrev(s); // reverse string s

    printf("%s\n",s);


return 0;
}


void strrev_(char str[])
{
    int l=strlen(str);
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        char t=str[i];
            str[i]=str[j];
            str[j]=t;
    }


    // char rev[1001];
    // int i=0,l=0;

    // for( ;str[l]!='\0';l++); //length of str1

    // strcpy(rev,str);

    // str[l]='\0'; // terminating reverse string

    // while(l--) // 1st l=l-1 | decreases to l=0
    // {
    //     str[i]=rev[l];
    //     i++;
    // }

}
