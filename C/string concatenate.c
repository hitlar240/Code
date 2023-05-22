#include<stdio.h>
int ln (char s[]);
int main()
{
   //char s1[]="tom",s2[]="al",s3[5];
    char s1[50],s2[50],s3[100];

    printf("\nS1= ");
    scanf("%s",s1);

    printf("\nS2= ");
    scanf("%s",s2);

   int i,j;
   for (i=0,j=0;i<ln(s1);i++,j++)
       {
          s3[j]=s1[i];
       }

    for (i=0;i<ln(s2);i++,j++)
       {
          s3[j]=s2[i];
       }

    s3[j]='\0';

    printf("\n %s",s3 );
return 0;
}




int ln (char s[])
{
    int i;
    for (i=0;s[i]!='\0';i++);
    return i;
}
