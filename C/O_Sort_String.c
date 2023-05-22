#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);

    int l=strlen(a);

    for(int i=0;i<l-1;i++)
    {
        for(int j=i;j<l;j++)
        {
            if(a[i]>a[j])
            {
                char t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

printf("%s\n",a);

return 0;
}