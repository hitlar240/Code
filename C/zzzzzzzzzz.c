#include<stdio.h>
#include<string.h>

int main()
{
    char c;
    int cnt[26]={0};

    while(scanf("%c",&c) != EOF)
    {
        cnt[c-'a']++;
    }

    for(char j='a';j<='z';j++)
    {
        if(cnt[j-'a']>0)
            printf("%c : %d\n",j,cnt[j-'a']);
    }

return 0;
}
