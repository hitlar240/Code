#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char s[101];
        scanf("%s",s);

        int l=strlen(s);

        if(l>10)
        {
            printf("%c",s[0]); //1st char
            printf("%d",l-2); //number of char in between
            printf("%c\n",s[l-1]); //last char
        }
        else
            printf("%s\n",s);
    }


return 0;
}
