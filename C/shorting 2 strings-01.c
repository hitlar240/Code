#include<stdio.h>
#include<string.h>
int string_compare(char a[], char b[]);

int main()
{
    char s1[100],s2[100];

    printf("\nS1= ");
    scanf("%s",s1);

    printf("\nS2= ");
    scanf("%s",s2);

    int d=string_compare(s1,s2);
    //int d=string_compare(gets(s1),gets(s2)); ??

    //int d=string_compare("tom","to");
    printf("\n%d",d);

return 0;
}












int string_compare(char a[], char b[])
{
    int i, j;
for(i = 0; a[i] != '\0' || b[i] != '\0'; i++)
{
    if(a[i] < b[i])
    {
    //printf("\ni=%d r=-1",i);
    return -1;
    }

 if(a[i] > b[i])
    {
    //printf("\ni=%d  r=1",i);
    return 1;
    }

 }
    //printf("\ni=%d  r=0",i);
    return 0;
}

