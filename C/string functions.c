#include<stdio.h>
#include<string.h>

int main()
{
    char a[]="to",b[]="tom";

//length of strings
    printf("\nlen a=%d\tlen b=%d",strlen(a),strlen(b));

//compare strings
    printf("\ni=%d",strcmp(a,b));

// ???
    printf("\ni=%d",strcpy(a,b));
}
