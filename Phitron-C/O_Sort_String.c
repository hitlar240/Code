#include<stdio.h>

int main()
{
    // int n;
    // scanf("%d",&n);
    
    int count[26] = {0};


    char ch;
    //for(int i=1; i<=n; i++)
    // while(n--)
    // {
    //     scanf("%c",&ch);
    //     count[ch - 'a']++;
    // }

    while(scanf("%c",&ch) != EOF)
    {
        count[ch - 'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(count[i] != 0)
        {
            for(int j=1; j<=count[i]; j++)
            {
                printf("%c",i+'a');
            }
        }
    }
    printf("\n");

return 0;
}