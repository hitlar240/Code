#include<stdio.h>
#include<string.h>
int strncmp_(char str1[], char str2[], int n);


int main()
{
    char a[101],b[101];
    //char b[]="abcdefghij";

    //scanf("%s %s",&a,&b);
    scanf(" %[^\n]",&a);
    scanf(" %[^\n]",&b);

    //  1  str1 > str2
    // -1  str1 < str2
    //  0  str1 == str2

    printf("%d\n",strncmp_(a,b,3)); // n<=length min{a,b}

    printf("%d\n",strncmp(a,b,3));


return 0;
}





int strncmp_(char str1[], char str2[], int n)
{

    for(int i=0; i<n && (str1[i]!=0 || str2[i]!=0) ;i++)
       if(str1[i]>str2[i]) return 1;
       else if(str1[i]<str2[i]) // return -1;
        { printf("%c<%c\n",str1[i],str2[i]); return -1; }


return 0; //str1==str2
}
