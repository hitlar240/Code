#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    while(scanf(" %[^\n]",s) != EOF)
    {
        
        if(s[0]=='\n')
            s[0]='o';
        
        int i=0; 
        while(s[i]!='\0')
        {
            if(s[i]=='/' && s[i+1]=='/')
            {  
                s[i]='\0'; //terminate strineg
                break;
            }
    
            i++;
        }   

        for(int i=0,s)

        printf("%s\n");
    }

return 0;
}