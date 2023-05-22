#include<stdio.h>
#include<string.h>

int main()
{
    char a[2001],b[1001];
    scanf("%s %s",a,b);

    for(int i=strlen(a),j=0; j<=strlen(b); j++,i++)
        a[i]=b[j];// copy with '\0'

    //strcat(a,b); //copy b to the end of a
    printf("%s\n",a);

return 0;
}
