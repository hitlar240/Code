#include<stdio.h>

int shortst(char a[], char b[]);

int main()
{
    char s1[100],s2[100];

    printf("\nS1= ");
    scanf("%s",s1);

    printf("\nS2= ");
    scanf("%s",s2);

    int r=shortst(s1,s2);

    //int r=shortst(gets(s1),gets(s2));



    if (r==1)
        printf("\n1. %s\n2. %s",s1,s2);

    else printf("\n1. %s\n2. %s",s2,s1);
// r=0 by default | (else) when strings are the same

     //printf("\n%d,%d,%d",i,s1[i],s2[i]);

return 0;
}







int shortst(char s1[], char s2[])
{
    int i,r; //r=0
    for (i=0;s1[i]!='\0' || s2[i]!='\0';i++)
        {
            if (s1[i]==s2[i])
                    continue;

            if (s1[i]<s2[i])
                {
                    //printf("\n%d,%d,%d",i,s1[i],s2[i]);
                    //r=1;break;
                    return -1;
                }
            if (s1[i]>s2[i])
                {
                    //printf("\n%d,%d,%d",i,s1[i],s2[i]);
                    //r=-1;break;
                    return -1;
                }
        }

        printf("\n%d,%d,%d",i,s1[i],s2[i]);

}
