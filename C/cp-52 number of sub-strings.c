#include<stdio.h>
#include<string.h>


int main()
{
    int t,i,j,lsb,c;
    char s[128],sb[128];

    scanf("%d",&t);

while(t--)
{
    scanf("%s %s",s,sb);
    //scanf(" %[^\n]",s);

    lsb=strlen(sb);
    c=0;

    for(i=0;i<=strlen(s)-lsb;i++)//
    {
        for(j=0;j<lsb;j++)//compare char.s
            if(s[i+j]!=sb[j]) break;
            //j++

        if(j==lsb) c++;

    }

    printf("%d\n",c);

}

return 0;
}

