#include<stdio.h>
#include<string.h>

int main()
{
    char s[100001];
    //scanf("%s",s);

    fgets(s,100001,stdin);
    s[strlen(s)-1]='\0'; // replace '\n' with '\0'
        //to avoid printing '\n'

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==',')
            s[i]=' ';
        else if('a'<=s[i] && s[i]<='z')
            s[i]=s[i]-('a'-'A');
        else if('A'<=s[i] && s[i]<='Z')
            s[i]=s[i]+('a'-'A');
    }

    printf("%s\n",s);

return 0;
}
