#include<stdio.h>
#include<string.h>


int main()
{
    char s[30];
    int i,j,a,b,l;

    scanf("%s",s);


    l=strlen(s);

    for(i=0,b=60,a=1;i<l;i++,a++,b--)
        printf("%*.1s %d\n",a,s,a);

printf("---------------------------------------------\n");

    for(i=l-1,a=l;i>=0;i--,a--)
        printf("%-60.*s %d\n",a,s,a);

return 0;
}
