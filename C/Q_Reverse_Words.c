#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001];
    //fgets(s,1000001,stdin);
    scanf("%[^\n]",s);

    int l=strlen(s);
    // if(s[l-1]=='\n');
    //     s[l-1]='\0';// '\n' -> '\0'

    for(int i=0,j=0;i<=l;i++)
    {
        char w[1000001];

        if(s[i]==' ' || s[i]=='\0')
        {
            w[j]='\0';
            printf("%s ",strrev(w));
            j=0;
        }
        else
        {
            w[j]=s[i];
            j++;
        } 

        
  
    }


return 0;
}