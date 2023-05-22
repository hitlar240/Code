#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001];
    //fgets(s,1000001,stdin);
    scanf("%s",&s);

    int sum=0;
    //for(int i=0;i<strlen(s);i++)
    for(int i=0;s[i]!='\0';i++)
        sum=sum+s[i]-'0';

    printf("%d\n",sum);

    return 0;
}
