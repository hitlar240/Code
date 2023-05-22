#include<stdio.h>
#include<string.h> //strlen()

int main()
{
int i,j;
char s[7][100];


//input strings:
//char s[7][100]={"ban","ind","pak","s l","afg","nep","vut"};


for (i=0;i<7;i++)//row
{
    printf("\n%d- ",i+1);
    scanf("%s",s[i]);
}//row



//output strings:
for (i=0;i<7;i++)//row
{
    printf("%s\n",s[i]);
}//row




printf("\n\n");


//output characters:
for (i=0;i<7;i++)//row
{
    //for(j=0;j<strlen(s[i]);j++)
    for (j=0;s[i][j]!='\0' ;j++)//column
    {
        printf("\t%c",s[i][j]);
    }//column

    printf("\n");
}//row


return 0;
}
