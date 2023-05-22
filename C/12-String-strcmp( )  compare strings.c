#include<stdio.h>
#include<string.h>
int strcmp_(char str1[], char str2[]);


int main()
{
    char a[101],b[101];

    //scanf("%s %s",&a,&b);
    scanf(" %[^\n]",&a);
    scanf(" %[^\n]",&b);

    //  1  str1 > str2
    // -1  str1 < str2
    //  0  str1 == str2

    printf("%d\n",strcmp_(a,b)); //function call
    printf("%d\n",strcmp(a,b));


return 0;
}





int strcmp_(char str1[], char str2[])
{

    for(int i=0; str1[i]!='\0' || str2[i]!='\0' ;i++)
       if(str1[i]>str2[i]) return 1;
       else if(str1[i]<str2[i]) return -1;


return 0; //str1==str2
}
