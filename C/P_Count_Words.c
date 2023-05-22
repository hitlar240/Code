#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001];
    fgets(s,1000001,stdin);
    // s[strlen(s)-1]='\0';

    int w=0; //initialization

    if('a'<=s[0] && s[0]<='z' || 'A'<=s[0] && s[0]<='Z')
        w=1; //1st word

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && ('a'<=s[i+1] && s[i+1]<='z' || 'A'<=s[i+1] && s[i+1]<='Z'))
        {
            w++;
        }
    }

    printf("%d\n",w);

return 0;
}