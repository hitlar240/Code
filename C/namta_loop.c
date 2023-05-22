#include<stdio.h>
int main()
{
    int i=1,n=0,m;
    while (i<=20)
        {
            for(m=1;m<=10;m++)
            {
            n=n+i;
            printf("\n%dx%d=%d",i,m,n);
            //n=n+5;
            }
        printf("\n");
        n=0;
        i++;

        }

}
