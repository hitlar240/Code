#include<stdio.h>
int main()
{
char n='a';
int r;
printf("name: ");

//scanf("%c",&n);
n=getchar();

printf("%c\t%d",n,n);

if(n%2==0)
    printf("\neven");
else //if(n<125)
   printf("\nodd");

   if (n>='a'&&n<='z')
    printf("\nlower case");
   else if (n>='A'&& n<='Z')
    printf("\nupper case");
   else printf("\ninvalid!");
}
