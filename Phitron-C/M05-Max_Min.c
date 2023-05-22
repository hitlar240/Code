#include<stdio.h>

int main()
{
    int a,b,c,max,min;
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c) max=a;
    else if(b>=a && b>=c) max=b;
    else max=c;

    if(a<=b && a<=c) min=a;
    else if(b<=a && b<=c) min=b;
    else min=c;

//    max=a;
//    if(max<b) max=b;
//    if(max<c) max=c;
//
//    min=a;
//    if(min>b) min=b;
//    if(min>c) min=c;

    printf("%d %d\n",min,max);


return 0;
}
