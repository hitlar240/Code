#include<stdio.h>
#include<string.h>

void rem(char str[], int ind);
void mov(char str[], int ind);

int main()
{
    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int score=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='V')
        {
            score+=5;
        }
        else if (s[i]=='W')
        {
            score+=2;
        }
        else if (s[i]=='X')
        {
            rem(s,i+1);
        }
        else if (s[i]=='Y')
        {
            mov(s,i+1);
        }
        else if (s[i]=='Z')
        {
            if(s[i+1]=='V')
            {
                score/=5;
                rem(s,i+1);
            }
            else if(s[i+1]=='W')
            {
                score/=2;
                rem(s,i+1);
            }
        }
        //printf("%s %d\n",s,score);
    }
    printf("%d\n",score);

return 0;
}


void rem(char str[], int ind)
{
    int l=strlen(str);
    for(int i=ind;i<l;i++)
    {
        str[i]=str[i+1];
    }
}

void mov(char str[], int ind)
{
    int l=strlen(str);
    str[l-1]=str[ind];
    for(int i=ind;i<l-1;i++)
    {
        str[i]=str[i+1];
    }
}