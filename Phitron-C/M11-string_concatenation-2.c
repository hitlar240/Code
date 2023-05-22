#include<stdio.h>
#include<string.h>

int main()
{
    char a[2001],b[1001];
    scanf("%s %s",a,b);
    int n;
    scanf("%d",&n);

    int i=strlen(a);
    for(int j=0; j<n; j++,i++)
        a[i]=b[j];// copy with '\0'

    a[i]='\0';//terminate string

    //strncat(a,b,n); //copy b to the end of a
    printf("%s\n",a);

return 0;
}
