#include<stdio.h>
#include<string.h>


int main()
{
    int t,i;
    char s[51];

    scanf("%d",&t);

while(t--)
{
    scanf("%s",s);

//i=0;
//while(s!='\0')
for(i=0;i<strlen(s);i++)
{

    if(s[i]=='L')
        s[i]=s[i-1];
    else if(s[i]=='R')
        s[i]=s[i+1];

     //i++;
}

    printf("%s\n",s);
}

return 0;
}

