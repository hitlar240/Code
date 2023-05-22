#include<stdio.h>

int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);

    int la=strlen(a);
    int lb=strlen(b);

    printf("%d %d\n",la,lb);


    char c[21];
    int i=0;
    for(i=0;i<la;i++)
        c[i]=a[i];
    for(int j=0;j<lb;j++,i++)
        c[i]=b[j];

    c[i]='\0'; //terminates string

    printf("%s\n",c);
    //printf("%s%s\n",a,b);

    int t=a[0];
        a[0]=b[0];
        b[0]=t;

    printf("%s %s\n",a,b);


return 0;
}
