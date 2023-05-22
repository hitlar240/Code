#include<stdio.h>


int main()
{
    int i,c=5;

    for (i=1000,c=1;i>=1;i--,c++)
        {
            //if(i!=1000 && i%5==0)
                //printf("\n");

            printf("%d\t",i);

            if(c==5)
                {c=0;printf("\n");}
        }

return 0;
}
