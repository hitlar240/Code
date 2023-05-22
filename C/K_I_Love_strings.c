#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char a[51],b[51];
        scanf("%s %s",a,b);

        for(int i=0;a[i]!='\0' || b[i]!='\0';i++)
        {
            if(i<strlen(a))
                printf("%c",a[i]);
            if(i<strlen(b))
                printf("%c",b[i]);
        }

        printf("\n");

    }

return 0;
}