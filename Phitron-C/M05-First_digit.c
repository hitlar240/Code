#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //while(n>9)
    //   n=n/10;

    int d=n/1000; // given 999<n<=9999 (1000 to 9999)

    if(d%2==0) printf("EVEN\n");
    else printf("ODD\n");


return 0;
}
