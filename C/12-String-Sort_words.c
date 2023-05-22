#include<stdio.h>
#include<string.h>
void strswp(char[], char[]);


int main()
{
    char s[][10001]={"tanvir","zzz","abul","tom","babul"};

    int row = sizeof(s)/sizeof(s[0]); // number of rows = size of array / size of one row


//sorting words
    for(int i=0; i < row-1; i++)
        for(int j=i+1; j < row; j++)
            if(strcmp(s[i],s[j]) == 1)
            {
                strswp(s[i],s[j]);
            }

//output
   for(int i=0; i < row; i++)
        printf("%s\n",s[i]);



return 0;
}



void strswp(char str1[], char str2[])
{
    char temp[1001];

//swap strings
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}