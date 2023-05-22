#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    char s[a+b+2];
    scanf("%s",s);

    int c=1;
    if(s[a]=='-')
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(i==a)
                continue;
            if(s[i]<'0' || s[i]>'9')
            {
                c=0; break; 
            }
            //printf("%d\n",i);
        }
    }
    else
        c=0;

    if(c==1)
        printf("Yes\n");
    else
        printf("No\n");

return 0;
}