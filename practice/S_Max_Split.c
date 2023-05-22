#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);

    //int l=strlen(s);

    int c=0;

    for(int i=0;s[i]!='\0';i++)
    {
        int k=1;
        char m=s[i];

        // printf("i=%d c=%d s=%c\n",i,c,s[i]);
        for(int j=i+1; ;j++)
        {
            if(s[j]==m)
            {
                k++;
            }
            else
            {
                i=i+2*k-1;
                //k=0;
                c++;
                // printf("i=%d c=%d s=%c\n",i,c,s[i]);
                break;
            }
        }
    
       
    }

    printf("%d\n",c);



    for(int i=0;s[i]!='\0';i++)
    {
        int k=1;
        char m=s[i];

    
            for(int j=i+1; ;j++)
            {
                if(s[j]==m)
                {
                    k++;
                }
                else
                {
                    i=i+2*k-1;
                    //k=0;
                    //c++;
                    break;
                }
            }
    


        for(int n=0;n<k;n++)
        {
            printf("%c",m);
        }
        
        if(m=='L')
            m='R';
        else
            m='L';

        for(int n=0;n<k;n++)
        {
            printf("%c",m);
        }
       printf("\n");
    }

return 0;
}