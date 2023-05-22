#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000],t[100];

    printf("\ns= ");
    //scanf("%s",s);

    gets(s);

    printf("\n%s",s);

    int i,j,l=strlen(s);

    for (i=0,j=0;i<l;i++)
        {
            t[j]=s[i];
            //printf("\nj=%d",j);
            j++;

            if('a'<=t[0]&&t[0]<='z')
                t[0]=t[0]-32;// 1st letter capital  '*'+('A'-'a')

            //t[i]=s[j];
            if (s[i]==' ')
            {
                t[j]='\0';
                printf("\n%s",t);
                j=0;
                }

        }
    //printf("\nj=%d",j);
    t[j]='\0';//for the last word
    printf("\n%s",t);

return 0;
}
