#include<stdio.h>

int main()
{
    int count[26]={0}; //initialization

    char c;
    
    // for( ;scanf("%c",&c)!=EOF; )
    while(scanf("%c",&c)!=EOF)
    {
        count[c-'a']++;
    }

    for(char i='a';i<='z';i++)
    {
        if(count[i-'a']!=0)
            printf("%c : %d\n",i,count[i-'a']);
    }

return 0;
}