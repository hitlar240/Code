#include<stdio.h>
#include<string.h>
int strstr_(char str[], char sub[]);

int main()
{
    char a[1001]="tom al",b[1001]="bl";

    printf("null=%d\n",strstr(a,b));

//strstr(a,b)  searches string b in string a if found, returns the position of 1st occurrence of the sub-string
//otherwise returns NULL pointer

    if(strstr_(a,b)==0)
    //if(strstr(a,b)==0)
        printf("b is not a sub-string of a\n");
    else
        printf("b is a sub-string of a\n");


return 0;
}


int strstr_(char str[], char sub[])
{
    int la=strlen(str);
    int lb=strlen(sub);

    for(int i=0;i<la;i++)
        for(int j=0;j<lb;j++)
            if(str[i+j]!=sub[j]) break;
            else if(j==lb-1) return 1;

    return 0;
}
