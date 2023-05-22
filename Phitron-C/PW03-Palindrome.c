#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);

    int l=strlen(s);
    //int check=1; //true initially
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            printf("NO\n");
            return 0;
            //check=0; //false
            //break;
        }
    }

    //if(check==1) // if true
        printf("YES\n");

return 0;
}
