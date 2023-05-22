#include<stdio.h>
#include<string.h>


int main()
{
    int t,i,j,lsb;
    char s[128],sb[128];

    scanf("%d",&t);

while(t--)
{
    scanf("%s %s",s,sb);
    //scanf(" %[^\n]",s);

    lsb=strlen(sb);

    for(i=0;i<=strlen(s)-lsb;i++)//
    {
        if(s[i]==sb[0])//find the 1st char. of sub-string
            for(j=1;j<lsb;j++)//compare next char.s
                if(s[i+j]!=sb[j]) break;
                //j++


        if(j==lsb)
            {printf("%d\n",i);break;}

    }

}

return 0;
}

