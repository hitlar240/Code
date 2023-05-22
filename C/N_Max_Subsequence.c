#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);

    int c=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }

    printf("%d\n",c);

return 0;
}