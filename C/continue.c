#include<stdio.h>
int main()
{
    int i=1;
    while (i<='z')
        {
            i++;
            //if (i=='t')
            if (i%2==0)
            continue; // skips the statements after CONTINUE


        printf("\nn=%d",i);
         //i++;

        }
        printf("\n\tt=%d",'t');
}
