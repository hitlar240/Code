#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char a[n+1];
    scanf("%s",a);

    int s=0;
    for(int i=0;i<n;i++)
    {
        //scanf("%c",&a[i]);
        s+=(a[i]-'0');//s=s+(a[i]-'0');
    }

    printf("%d\n",s);

return 0;
}
