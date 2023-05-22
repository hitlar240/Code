#include<stdio.h>
#include<string.h>

// int pal(char s[])
// {
//     for(int i=0,j=strlen(s)-1; i<j; i++,j--)
//     {
//         if(s[i] != s[j])
//             return 0;
//     }
//     return 1;
// }

int pal(char s[])
{
    char c[1001];
    int l = strlen(s);
    
    strcpy(c,s);
    // for(int i=0,j=l-1; j>=0; i++,j--)
    // {
    //     c[i] = s[j];
    // }
    // c[l] = '\0';


    // strrev(c);
    for(int i=0,j=l-1; i<j; i++,j--)
    {
        char ch = c[i];
        c[i] = c[j];
        c[j] = ch;
    }
    

    if(strcmp(c,s) == 0)
        return 1;
    else
        return 0;
}


int main()
{
    char s[1001];
    scanf("%s",&s);

    int p = pal(s);

    if(p == 1)
        printf("YES\n");
    else
        printf("NO\n");

return 0;
}