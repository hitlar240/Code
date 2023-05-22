#include<stdio.h>
#include<string.h>

int main()
{
    char s[10001];
    scanf("%s",s);

    char h[]="hello";
    int lh=strlen(h);

    int k=0;
    for(int i=0;h[i]!='\0';i++)
    {
        int t=k;
        for(int j=k;s[j]!='\0';j++)
        {
            if(h[i]==s[j])
            {
                k=j+1;
                break;
            }
        }
        if(t==k)
        {
            printf("NO\n");
            break;
        }
        if(t!=k && i==lh-1)
        printf("YES\n");
    }

return 0;
}