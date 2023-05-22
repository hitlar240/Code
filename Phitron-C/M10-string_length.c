#include<stdio.h>

int main()
{
    char a[1001],b[1001];
    scanf("%s",&a);
    scanf("%s",&b);

    int la,lb;

    la=strlen(a);
    lb=strlen(b);

//    for(la=0;a[la]!='\0';la++);
//    for(lb=0;b[lb]!='\0';lb++);

    printf("%d %d\n",la,lb);

    printf("%s %s\n",a,b);

return 0;
}
