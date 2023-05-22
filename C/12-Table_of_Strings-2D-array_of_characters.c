#include<stdio.h>
#include<string.h> //strlen()

int main()
{
    int i,j;
    //char s[7][100];


    //input strings:
    char s[][101]={"ban","ind","pak","vut","s l","afg","nep"};

    //s[3]="cha"; // ???
    strcpy(s[3],"cha"); // replace 4th row

//    for (i=0;i<7;i++)//row
//    {
//        //scanf("%s",s[i]);
//        scanf(" %[^\n]",s[i]);
//    }//row

    int row = sizeof(s)/sizeof(s[0]); // number of rows = size of array / size of one row

//output strings:
    i=0;
    while(i<row)
    {
        printf("i=%d\n",i);
        printf("i=%d s=%s\n",i,s[i++]); //post-increment
        //printf("i=%d s=%s\n",i,s[++i]); //pre-increment (wrong)
        //i++;
    }

////output strings:
//    for (i=0;i<7;i++)
//        printf("%s\n",s[i]);//row


    printf("\n\n");


    //output characters:
    for (i=0; i < row; i++)//row
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
