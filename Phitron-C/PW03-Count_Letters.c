#include<stdio.h>

int main()
{
    //size too long 10^7

    char c;

    int cnt[26]={0}; // (a to z) initial count

    while(1)
    //while(scanf("%c",&c) != EOF)
    //for( ;scanf("%c",&s) != EOF; )
    {
        scanf("%c",&c);
        if(c=='\n') break;

        cnt[c-'a']++;
        //printf("%c\n",s);
    }

    for(char j='a';j<='z';j++)
    {
        //printf("%c\n",j);
        if(cnt[j-'a']>0)
            printf("%c : %d\n",j,cnt[j-'a']);
    }


return 0;
}
