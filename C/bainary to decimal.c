#include<stdio.h>
#include<math.h>// pow( , )
#include<string.h>// strlen()

int main()
{
char b[100];
int i,j,d=0;

printf("\nBinary= ");
scanf("%s",b);

for (i=strlen(b)-1,j=0;i>=0;i--,j++)
    {
        //printf("\n%d",b[i]);
        d=d+(b[j]-'0')*pow(2,i);
    }

    printf("\nDecimal= %d",d);

return 0;
}
