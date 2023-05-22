#include<stdio.h>
#include<math.h>// pow( , )
#include<string.h>// strlen()

int main()
{
int b[100];
int i,j,d,r,q;

printf("\nDecimal= ");
scanf("%d",&q);


for (i=0;;i++)
//while(1)
    {
        r=q%2;
        b[i]=r;
        q=q/2;
        printf("\n q=%d\tr=%d",q,r);

    if(q<r) break;
    }

printf("\n\nBainary= ");
    for(int j=i;j>=0;j--)
    printf("%d",b[j]);

return 0;
}
