#include<stdio.h>

int main()
{
    char url[10001];
    scanf("%s",url);

    char x[10001],y[10001];

    for(int i=1;url[i]!='\0';i++)
    {
        //parameter:
        if(url[i-1]=='?')
        {
            //1st x
            int j;
            for(j=0;url[i]!='=';i++,j++)
            {
                x[j]=url[i];
            }
            x[j]='\0';
            printf("%s: ",x);
        }
        else if(url[i-1]=='&')
        {
            // x
            int j;
            for(j=0;url[i]!='=';i++,j++)
            {
                x[j]=url[i];
            }
            x[j]='\0';
            printf("%s: ",x);
        }

    //value:
         if(url[i-1]=='=')
        {
            //1st x
            int j;
            for(j=0;url[i]!='&' && url[i]!='\0';i++,j++)
            {
                y[j]=url[i];
            }
            y[j]='\0';
            printf("%s\n",y);
        }

    //printf("%s: %s\n",x,y);


    }

return 0;
}